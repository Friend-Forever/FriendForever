using System;
using System.IO;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class JSONSaving : MonoBehaviour
{
    private PetData petData;

    private string path = "";
    private string persistenPath = "";

    public Button SaveButton;
    public Button DayButton;
    public Button NextScene;
    public Button BeforceScene;
    public Button FoodButton;
    public Button EngrgyButton;
    public Button HappyButton;

    public GameObject FullFood;
    public GameObject FullEnergy;
    public GameObject FullHappy;
    

    public Text DayText;
    public Text FoodText;
    public Text EngeryText;
    public Text HappyText;

    

    public void Start()
    { 
        SetPath();
        CreatePlayerData();

        if(petData == null) 
        {
            CreatePlayerData();
            SaveData();
        }
        else
        {
           LoadPlayerData();
        }

        CraetButton();      

    }

    

    private void CreatePlayerData()
   {
        petData = new PetData("", 100f, 100f, 100f, 1);
    }
    

    private void SetPath()
    {
        path = Application.dataPath + Path.AltDirectorySeparatorChar + "SaveData.json";
        persistenPath = Application.persistentDataPath + Path.AltDirectorySeparatorChar + "SaveData.json";
    }

    private void CraetButton()
    {
        Button btnSave = SaveButton.GetComponent<Button>();
        btnSave.onClick.AddListener(SaveData);
        
        Button btnDay = DayButton.GetComponent<Button>();
        btnDay.onClick.AddListener(DayPlsu);
        
        Button btnNext = NextScene.GetComponent<Button>();
        btnNext.onClick.AddListener(NextScen);
        Button btnFood = FoodButton.GetComponent<Button>();
        btnFood.onClick.AddListener(FoodStatus);

        Button btnEngrgy = EngrgyButton.GetComponent<Button>();
        btnEngrgy.onClick.AddListener(EngrgyStatus);

        Button btnHappy = HappyButton.GetComponent<Button>();
        btnHappy.onClick.AddListener(HappyStatus);
    }
    public void Update()
    {
        if(Input.GetKeyDown(KeyCode.S))
            SaveData();
        if(Input.GetKeyDown(KeyCode.W))
            LoadData();

        DayText.text = petData.days.ToString();
        FoodText.text = petData.food.ToString();
        EngeryText.text = petData.energy.ToString();
        HappyText.text = petData.happy.ToString(); 

        
        BTactionOnOff();              
        
        if(petData.days == 30) 
        {
            petData.Re();
            SaveData();
             if(petData.days < 29) 
            {
             SceneManager.LoadScene(0);
            }
        }
    }

    public void SaveData()
    {
        string savePath = path;
        
        Debug.Log("Saving Data at " + savePath);
        string json = JsonUtility.ToJson(petData);
        Debug.Log(json);

        using StreamWriter writer = new StreamWriter(savePath);
        writer.Write(json);
        
        petData.SavePetData();
    }

    public void LoadData()
    {
        using StreamReader reader = new StreamReader(path);
        string json = reader.ReadToEnd();

        PetData data = JsonUtility.FromJson<PetData>(json);
        Debug.Log(data.ToString());
        
        petData.LoadPetData();
    }
    public void LoadPlayerData()
    {
          if (File.Exists(path))
        {
            string json = File.ReadAllText(path);
            petData = JsonUtility.FromJson<PetData>(json);
        }
    }
    
    
    public void DayPlsu()
    {
        petData.days += 1; 
        DayText.text = petData.days.ToString();

         
         if(petData.days % 2 == 0) 
        {
            petData.food -=10;
            FoodText.text = petData.food.ToString();

            petData.energy -=10;
            EngeryText.text = petData.energy.ToString();

            petData.happy -=10;
            HappyText.text = petData.happy.ToString();

            SaveData();
        }
    }

    public void NextScen()
    {
        SceneManager.LoadScene(2);
    }
    
//    public void BeforeScen()
//    {
//        SceneManager.LoadScene();
//   }

public void FoodStatus() 
{
    petData.days += 1 ;
    DayText.text = petData.days.ToString();

    petData.food +=20;
    FoodText.text = petData.food.ToString();

    petData.energy -=5;
    EngeryText.text = petData.energy.ToString(); 

    petData.happy -=5;
    HappyText.text = petData.happy.ToString();
    
    if(petData.food >= 100) 
    {
        FullFood.SetActive(false);
    }
    SaveData();
    
}

public void EngrgyStatus()
{
   petData.days += 1;
   DayText.text = petData.days.ToString();

    petData.food -=5;
    FoodText.text = petData.food.ToString();

    petData.energy +=20;
    EngeryText.text = petData.energy.ToString();

    petData.happy -=5;
    HappyText.text = petData.happy.ToString();


    if(petData.energy >= 100) 
    {
        FullEnergy.SetActive(false);
    }
    SaveData();
}

public void HappyStatus()
{
     petData.days += 1;
   DayText.text = petData.days.ToString();

    petData.food -=20;
    FoodText.text = petData.food.ToString();

    petData.energy -=20;
    EngeryText.text = petData.energy.ToString();

    petData.happy +=20;
    HappyText.text = petData.happy.ToString();


    if(petData.happy >= 100) 
    {
        FullHappy.SetActive(false);
    }
    SaveData();
}

public void BTactionOnOff()
{
    if(petData.food > 100) 
        FullFood.SetActive(false);
    else
        FullFood.SetActive(true);
    if(petData.energy > 100) 
        FullFood.SetActive(false);
    else
        FullEnergy.SetActive(true);
    if(petData.happy > 100) 
        FullHappy.SetActive(false);
    else
        FullHappy.SetActive(true);
}
}

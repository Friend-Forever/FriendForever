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
    public Button NextSceneMiniGame;
    public Button BeforceScene;
    public Button FoodButton;
    public Button HappyButton;
    public Button HealthyButton;
    public Button MoneyButton;

    public GameObject FullFood;
    public GameObject FullHappy;
    public GameObject Day_bt;
    

    public Text DayText;
    public Text FoodText;
    public Text EngeryText;
    public Text HappyText;
    public Text HealthyText;
    public Text MoneyText;

    public Image FoodBar;
    public Image HappyBar;
    public Image HealthyBar;
    public Image EngeryBar;


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
           petData.LoadPetData();
        }    


        Button btnSave =SaveButton.GetComponent<Button>();
        btnSave.onClick.AddListener(SaveData);
        
        Button btnDay =DayButton.GetComponent<Button>();
        btnDay.onClick.AddListener(DayPlsu);
        
        Button btnNext =NextScene.GetComponent<Button>();
        btnNext.onClick.AddListener(NextScen);

        Button btnNextSceneMiniGame = NextSceneMiniGame.GetComponent<Button>();
        btnNextSceneMiniGame.onClick.AddListener(NextScenMiniGame);
        
      //  Button btnBeforce =BeforceScene.GetComponent<Button>();
     //   btnBeforce.onClick.AddListener(BeforeScen);

        Button btnFood = FoodButton.GetComponent<Button>();
        btnFood.onClick.AddListener(FoodStatus);

        Button btnHappy = HappyButton.GetComponent<Button>();
        btnHappy.onClick.AddListener(HappyStatus);

        Button btnHealthy = HealthyButton.GetComponent<Button>();
        btnHealthy.onClick.AddListener(HealthyStatus);

        Button btnMoney = MoneyButton.GetComponent<Button>();
        btnMoney.onClick.AddListener(AddMoney);

         if(petData.food > 100) 
        {
            FullFood.SetActive(false);
        }
        if(petData.energy > 100) 
        {
        FullFood.SetActive(false);
        }
        if(petData.happy > 100) 
        {
            FullHappy.SetActive(false);
        }

    }

    private void CreatePlayerData()
   {
        petData = new PetData("", 100f, 100f, 100f, 100f, 1, 2);
    }
    

    private void SetPath()
    {
        path = Application.dataPath + Path.AltDirectorySeparatorChar + "SaveData.json";
        persistenPath = Application.persistentDataPath + Path.AltDirectorySeparatorChar + "SaveData.json";
    }

    public void Update()
    {

        DayText.text = petData.days.ToString();
        FoodText.text = petData.food.ToString();
        EngeryText.text = petData.energy.ToString();
        HappyText.text = petData.happy.ToString(); 
        HealthyText.text = petData.healthy.ToString();
        MoneyText.text = petData.money.ToString();

        FoodBarUpdate();
        HappyBarUpdate();
        HealthyBarUpdate();
        EngeryBarUpdate();
        


        if(petData.food <= 99) 
        {
            FullFood.SetActive(true);
        }
        
       
        if(petData.happy <= 99) 
        {
            FullHappy.SetActive(true);
        }
        

        if(petData.days == 30) 
        {
            petData.Re();
            SaveData();
             if(petData.days < 29) 
            {
             SceneManager.LoadScene(0);
            }
        }
        if(petData.days == 1 || petData.energy >=64 ) 
        {
            Day_bt.SetActive(false);
        }
        else
        {
            Day_bt.SetActive(true);
        }
        if(petData.energy < 0) 
        {
            DayPlsu();
        }

        if(petData.food >= 99) 
        {
            petData.food = 100;
        }
        if(petData.happy >= 99) 
        {
            petData.happy = 100;
        }
        if(petData.healthy <=0) 
        {
            petData.Re();
            SaveData();
             SceneManager.LoadScene(2);
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

        petData.energy =100;
         EngeryText.text = petData.energy.ToString();

         
         if(petData.days %2 == 0 ) 
         {
         petData.food -=10;
         FoodText.text = petData.food.ToString();

         petData.happy -=10;
         HappyText.text = petData.happy.ToString();

        }
        SaveData();
        
    }

    public void NextScen()
    {
        SceneManager.LoadScene(2);
        petData.Re();
            SaveData();
    }
    public void NextScenMiniGame()
    {
        SceneManager.LoadScene(4);
        SaveData();
    }
    
//    public void BeforeScen()
//    {
//        SceneManager.LoadScene();
 //   }

public void FoodStatus() 
{
    

    petData.food +=20;
    FoodText.text = petData.food.ToString();

    petData.energy -=36;
    EngeryText.text = petData.energy.ToString(); 

    petData.happy -=10;
    HappyText.text = petData.happy.ToString();

    petData.healthy -=8;
    HealthyText.text = petData.healthy.ToString();
    
    if(petData.food >= 100) 
    {
        FullFood.SetActive(false);
    }
    SaveData();
    
}


public void HappyStatus()
{

    petData.food -=10;
    FoodText.text = petData.food.ToString();

    petData.energy -=36;
    EngeryText.text = petData.energy.ToString();

    petData.happy +=20;
    HappyText.text = petData.happy.ToString();

    petData.healthy -=8;
    HealthyText.text = petData.healthy.ToString();


    if(petData.happy >= 100) 
    {
        FullHappy.SetActive(false);
    }
    SaveData();
}

public void HealthyStatus()
{
    if(petData.money >= 2) 
    {
        petData.healthy =100;
        HealthyText.text = petData.healthy.ToString();

        petData.money -=2;
        MoneyText.text = petData.money.ToString();

         petData.food -=20;
         FoodText.text = petData.food.ToString();

         petData.happy -=20;
         HappyText.text = petData.happy.ToString();
    }
    else 
    {
        Debug.Log("don't have Money!!");
    }
    SaveData();
    
}

public void AddMoney() 
{
    petData.money +=1;
    MoneyText.text = petData.money.ToString();

    SaveData();
}

public void FoodBarUpdate()
{
    FoodBar.fillAmount = petData.food / 100.0f;
}
public void HappyBarUpdate()
{
    HappyBar.fillAmount = petData.happy / 100.0f;
}
public void HealthyBarUpdate()
{
    HealthyBar.fillAmount = petData.healthy / 100.0f;
}
public void EngeryBarUpdate()
{
    EngeryBar.fillAmount = petData.energy / 100.0f;
}
    
    
   
    
    
    
    
    
}

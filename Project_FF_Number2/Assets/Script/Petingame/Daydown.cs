using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Daydown : MonoBehaviour
{
    public static Daydown instance;

    public Text DayText;
    public Text FoodText;
    public Text EnergyText;
    public Text HappingessText;

    public GameObject fullFool;
    public GameObject fullEnergy;
    public GameObject fullHappy;

   public int  hunger , happingess , energy;
   public int hungerTickRate , happTickRate ,energyTickRate ;
   int day = 1;
   

    private void Awake() 
{
    instance = this;
}

void Start()
    {  
         if(!PlayerPrefs.HasKey("Happy"))
        {
           happTickRate =100;
          
        }
        else
        {
            LoadHappy();
        }
    if(!PlayerPrefs.HasKey("Hunger")) 
    {
        hungerTickRate =100;
    }
    else 
    {
        LoadHunger();
    }
    if(!PlayerPrefs.HasKey("Energy")) 
    {
        energyTickRate = 100;
    }
    else
    {
        LoadEnergy();
    }
    if(!PlayerPrefs.HasKey("Day")) 
    {
        day = 1;
    }
    else
    {
      LoadDay();
    }    
    
        DayText.text = day.ToString() + " : Day";
        FoodText.text = hungerTickRate.ToString()+ " : Food";
        EnergyText.text = energyTickRate.ToString() + " : Energy";
        HappingessText.text = happTickRate.ToString() + " : Happy";

        
    }
 void Update()
 {
    if(hungerTickRate <=100) 
        {
            fullFool.SetActive(true);
        }
         if(energyTickRate  <= 100) 
        {
            fullEnergy.SetActive(true);
        }
         if(happTickRate  <= 100) 
        {
            fullHappy.SetActive(true);
        }
 }



     
     public void AddDay()
    {
        day +=1;
        DayText.text = day.ToString() + " : Day";

        if(day == 2 ||day == 4||day == 6||day == 8||day == 10 ||day == 12 ||day == 14 ||day == 16 ||day == 18 ||day == 20 ||day == 22 ||day == 24 ||day == 26 ||day == 28) 
        {
          hungerTickRate -=10;
          FoodText.text = hungerTickRate.ToString() + " : Food";

          energyTickRate -=10;
        EnergyText.text = energyTickRate.ToString() + " : Energy";

          happTickRate -=10;
       HappingessText.text = happTickRate.ToString() + " : Happy";
       
        }
        SaveDay();  
        if (day == 30)
        {
        SceneManager.LoadScene(0);
        PlayerPrefs.DeleteKey("Day");
        PlayerPrefs.DeleteKey("Happy");     
        PlayerPrefs.DeleteKey("Energy");     
        PlayerPrefs.DeleteKey("Hunger");          
         }
        
    }


    public void AddFood()
    {
        hungerTickRate +=20;
          FoodText.text = hungerTickRate.ToString() + " : Food"; 

           energyTickRate -=5;
        EnergyText.text = energyTickRate.ToString() + " : Energy"; 

        if(hungerTickRate >100) 
        {
            fullFool.SetActive(false);
        }
        SaveHunger();
       

         
    }
    public void AddEnergy()
    {
         hungerTickRate -=5;
          FoodText.text = hungerTickRate.ToString() + " : Food"; 

           energyTickRate +=20;
        EnergyText.text = energyTickRate.ToString() + " : Energy";
        
         if(energyTickRate >100) 
        {
            fullEnergy.SetActive(false);
        }
        SaveEnergy();
         
    }
    
    public void AddHappinger() 
    {
       hungerTickRate -=5;
          FoodText.text = hungerTickRate.ToString() + " : Food"; 

           energyTickRate -=5;
        EnergyText.text = energyTickRate.ToString() + " : Energy";

          happTickRate +=20;
       HappingessText.text = happTickRate.ToString() + " : Happy";

        if(happTickRate >100) 
        {
            fullHappy.SetActive(false);
        }
        SaveHappy();
        
    }

    private void SaveHappy() 
    {
       PlayerPrefs.SetInt("Happy",happTickRate);
    }
    private void LoadHappy()
    {
        happTickRate = PlayerPrefs.GetInt("Happy");
    }

    private void SaveHunger() 
    {
        PlayerPrefs.SetInt("Hunger",hungerTickRate);
    }
    private void LoadHunger() 
    {
        hungerTickRate = PlayerPrefs.GetInt("Hunger");
    }

    private void SaveEnergy() 
    {
        PlayerPrefs.SetInt("Energy" , energyTickRate);
    }
    private void LoadEnergy() 
    {
        energyTickRate = PlayerPrefs.GetInt("Energy");
    }

    private void SaveDay()
    {
        PlayerPrefs.SetInt("Day", day);
    }
    private void LoadDay () 
    {
        day = PlayerPrefs.GetInt("Day");
    }




    }


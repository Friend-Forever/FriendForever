using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PetData
{
    public string petName; 
    public float food;
    public float happy;
    public float energy;
    public float healthy;

    public int days;
    public float money;

    public PetData(string petName, float food, float happy, float energy,float healthy,int days,float money)
    {
        this.petName = petName;
        this.food = food;
        this.happy = happy;
        this.energy = energy;
        this.healthy = healthy;
        this.days = days;
        this.money = money;
    }

    public override string ToString()
    {
        return "Pet Name: " + petName + " Food: " + food + " Happy: " + happy + " Energy: " + energy + " Healthy: " + healthy +" Days: " + days + "Money" + money;
    }
    
    public void SavePetData()
    {
        PlayerPrefs.SetString("PetName", petName);
        PlayerPrefs.SetFloat("Food", food);
        PlayerPrefs.SetFloat("Happy", happy);
        PlayerPrefs.SetFloat("Energy", energy);
        PlayerPrefs.SetFloat("Healthy",healthy);
        PlayerPrefs.SetInt("Days", days);
        PlayerPrefs.SetFloat("Money",money);
    }
    
    public void LoadPetData()
    {
        petName = PlayerPrefs.GetString("PetName");
        food = PlayerPrefs.GetFloat("Food");
        happy = PlayerPrefs.GetFloat("Happy");
        energy = PlayerPrefs.GetFloat("Energy");
        healthy = PlayerPrefs.GetFloat("Healthy");
        days = PlayerPrefs.GetInt("Days");
        money = PlayerPrefs.GetFloat("Money");
    }
    
    public void DeletePetData()
    {
        PlayerPrefs.DeleteKey("PetName");
        PlayerPrefs.DeleteKey("Food");
        PlayerPrefs.DeleteKey("Happy");
        PlayerPrefs.DeleteKey("Energy");
        PlayerPrefs.DeleteKey("Healthy");
        PlayerPrefs.DeleteKey("Days");
        PlayerPrefs.DeleteKey("Money");
    }

    public void Re() 
    {
        petName = " ";
        food = Random.Range(50,100);
        energy = Random.Range(50,100);
        happy = Random.Range(50,100);
        healthy = Random.Range(50,100);
        days = 1;
        money = 2;
    }
    
    

    
    



}


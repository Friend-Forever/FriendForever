using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PetData
{
    public string petName; 
    public float food;
    public float happy;
    public float energy;
    public int days;

    public PetData(string petName, float food, float happy, float energy,int days)
    {
        this.petName = petName;
        this.food = food;
        this.happy = happy;
        this.energy = energy;
        this.days = days;
    }

    public override string ToString()
    {
        return "Pet Name: " + petName + " Food: " + food + " Happy: " + happy + " Energy: " + energy + " Days: " + days;
    }
    
    public void SavePetData()
    {
        PlayerPrefs.SetString("PetName", petName);
        PlayerPrefs.SetFloat("Food", food);
        PlayerPrefs.SetFloat("Happy", happy);
        PlayerPrefs.SetFloat("Energy", energy);
        PlayerPrefs.SetInt("Days", days);
    }
    
    public void LoadPetData()
    {
        petName = PlayerPrefs.GetString("PetName");
        food = PlayerPrefs.GetFloat("Food");
        happy = PlayerPrefs.GetFloat("Happy");
        energy = PlayerPrefs.GetFloat("Energy");
        days = PlayerPrefs.GetInt("Days");
    }
    
    public void DeletePetData()
    {
        PlayerPrefs.DeleteKey("PetName");
        PlayerPrefs.DeleteKey("Food");
        PlayerPrefs.DeleteKey("Happy");
        PlayerPrefs.DeleteKey("Energy");
        PlayerPrefs.DeleteKey("Days");
    }

    public void Re() 
    {
        petName = " ";
        food = 100;
        energy = 100;
        happy = 100;
        days = 1;
    }
    
    

    
    



}


using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PetSelect : MonoBehaviour
{
    //select pet
    public PetDatabase petDB;
    public SpriteRenderer artworkSprite;
    private int selectedOption = 0;
    public Text nameText;
    // Start is called before the first frame update
    void Start()
    {
        artworkSprite.sprite = petDB.petList[selectedOption].petSprite;

        if(!PlayerPrefs.HasKey("selectedOption"))
        {
            selectedOption =0;
        }
        else
        {
            Load();
        }
        UpdatePet(selectedOption);
    }
    public void NextOption()
    {
        selectedOption++;

        if (selectedOption >= petDB.PetCount)
        {
            selectedOption = 0;
        }
        UpdatePet(selectedOption);
        Save();
    }
     
     public void BackOption()
     {
        selectedOption--;

        if(selectedOption <0)
        {
            selectedOption = petDB.PetCount - 1;
        }
        UpdatePet(selectedOption);
        Save();
     }


    // Update is called once per frame
    void Update()
    {
        
    }
    private void UpdatePet(int selectedOption) 
    {
        Pet pet = petDB.GetPet(selectedOption);
        nameText.text = pet.petName;
        artworkSprite.sprite = pet.petSprite;
    }
    public void Save()
    {
        PlayerPrefs.SetInt("selectedOption", selectedOption);
    }
    public void Load()
    {
        selectedOption = PlayerPrefs.GetInt("selectedOption");
    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
   public PetDB petDB;
    public GameObject Playerpet;
    private int selectedPet = 0;
     void Start()
     {
        selectedPet = PlayerPrefs.GetInt("Character", 0);
        Playerpet = Instantiate(petDB.GetPet(selectedPet).pet, transform.position, Quaternion.identity);
        Playerpet.transform.SetParent(transform);

        UpdateCharacter(selectedPet);
     }
     public void UpdateCharacter(int selectedOption)
     {
        selectedPet = selectedOption;
        PlayerPrefs.SetInt("Character", selectedPet);
        Destroy(Playerpet);
        Playerpet = Instantiate(petDB.GetPet(selectedPet).pet, transform.position, Quaternion.identity);
        Playerpet.transform.SetParent(transform);
        Save();
     }

    private void Load()
      {
        selectedPet = PlayerPrefs.GetInt("Character", 0);
      }
     private void Save()
      {
        PlayerPrefs.SetInt("Character", selectedPet);
      }
     void update()
     {
       Debug.Log(selectedPet);
     }
    
}

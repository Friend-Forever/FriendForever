using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class CharaterSelect : MonoBehaviour
{
    public Pet[] petModel;
    public Transform Spot;
    
    public List<GameObject> pets;
    public GameObject Playerpet;
    public int index = 0;
    void Start()
    {
       pets = new List<GameObject>();

        foreach (var petModels in petModel)
        {
           GameObject go = Instantiate(petModels.pet,Spot.position, Quaternion.identity);
           go.SetActive(false);
           go.transform.SetParent(Spot);
           pets.Add(go);
        }
    
        ShowPetOnList();

    }

    void ShowPetOnList()
    {
        pets[index].SetActive(true);
        Playerpet = pets[index];
    }

    public void Next()
    {
        pets[index].SetActive(false);
        if (index < pets.Count - 1)
            index++;
        else
            index = 0;
        ShowPetOnList();
        SaveCharacter();
    }

    public void Back()
    {
        pets[index].SetActive(false);
        if (index == 0)
            index = pets.Count - 1;
        else
            index = index - 1;
        ShowPetOnList();
        SaveCharacter();
    }

    public void SaveCharacter()
    {
        PlayerPrefs.SetInt("Character", index);
    }

    public void LoadCharacter()
    {
        index = PlayerPrefs.GetInt("Character");
        ShowPetOnList();
    }
    
    public void ChangeScene(int sceneID) 
     {
        SaveCharacter();
        SceneManager.LoadScene(sceneID);
     }

    // Update is called once per frame
    void Update()
    {

    }
}

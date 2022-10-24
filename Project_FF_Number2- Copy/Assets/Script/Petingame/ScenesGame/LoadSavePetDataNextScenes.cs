using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadSavePetDataNextScenes : MonoBehaviour
{
    
   PetData petData = new PetData("", 100f, 100f, 100f, 100f, 1, 2);

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update() 
    {
     petData.LoadPetData();

        if(Input.GetKeyDown(KeyCode.Space))
        {
            Debug.Log(petData);
        }
    }
}

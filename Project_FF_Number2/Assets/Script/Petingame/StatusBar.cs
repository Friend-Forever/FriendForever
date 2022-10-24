using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StatusBar : MonoBehaviour
{
    PetData petData = new PetData("", 100f, 100f, 100f, 1);


    void Start()
    {
        
    }

    void Update()
    {
        petData.LoadPetData();

        if(Input.GetKeyDown(KeyCode.Space))
        {
            Debug.Log(petData);
        }
    }
}

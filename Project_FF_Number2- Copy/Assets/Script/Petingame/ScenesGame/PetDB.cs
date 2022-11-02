using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
public class PetDB : ScriptableObject
{
    public Pet[] pet;

    public int PetCount
    {
        get
        {
            return pet.Length;
        }
    }

    public Pet GetPet(int index)
    {
        return pet[index];
    }
    


}

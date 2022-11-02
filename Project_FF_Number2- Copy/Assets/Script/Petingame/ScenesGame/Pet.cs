using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="PetModel", menuName ="Pet")]
public class Pet : ScriptableObject
{
   public string Name;
   public GameObject pet;
   public Sprite artwork;
   public RuntimeAnimatorController animator;


}

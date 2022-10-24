using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Manager : MonoBehaviour
{
    PetData petData = new PetData("", 100f, 100f, 100f, 1);

    public Text Score;
    public Text MoneyMiniText;
    private int ScoreNum;
    private int MoneyMini;
    public GameObject[] Levels;

    int currentLevel;


    private void Start()
    {
        ScoreNum = 0;
        MoneyMini = 0;
        Score.text = "Score = " + ScoreNum;
        MoneyMiniText.text = "Money = " + MoneyMini;
        petData.LoadPetData();
    }

    public void correctAnswer()
    {
        if(currentLevel + 1 != Levels.Length)
        {
            Levels[currentLevel].SetActive(false);

            currentLevel++;
            Levels[currentLevel].SetActive(true);

            ScoreNum +=1;
            Score.text = "Score = " + ScoreNum;

            Debug.Log("Correct");

            MoneyMini += 1;
            MoneyMiniText.text = "Money = " + MoneyMini;

          if(MoneyMini == 1) 
          {
            petData.food +=1;
            petData.SavePetData();

          }

        }
    }


    public void wrongAnswer()
    {
        if (currentLevel + 1 != Levels.Length)
        {
            Levels[currentLevel].SetActive(false);

            currentLevel++;
            Levels[currentLevel].SetActive(true);

            Debug.Log("Wrong");
        }
    }

    public void Update()
    {
        switch(ScoreNum)
        {
            case 1:
                petData.food += 1;
                petData.SavePetData();
                break;
            case 2:
                petData.food += 1;
                petData.SavePetData();
                break;
        }

        
        

        
    }

}
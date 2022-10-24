using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Manager : MonoBehaviour
{   
    PetData petData = new PetData ("", 100f, 100f, 100f, 100f, 1, 2);

    public Text Score;
    public Text MoneyMiniText;
    private int ScoreNum;
    private float MoneyMini;
    private float RandomMoney;
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
          
          MoneyUpdate();
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

    public void MoneyUpdate() 
    {
        switch (ScoreNum)
        {
            case 1 : 
            RandomMoney += Random.Range(1,2);
            MoneyMini += RandomMoney;
            petData.money += RandomMoney ;

            
            MoneyMiniText.text = "Money = " + MoneyMini;

            Debug.Log(petData.money);
            petData.SavePetData();
            break;

             case 2 : 
            RandomMoney += Random.Range(1,2);
            MoneyMini += RandomMoney;
            petData.money += RandomMoney ;

            
            MoneyMiniText.text = "Money = " + MoneyMini;

            Debug.Log(petData.money);
            petData.SavePetData();
            break;

            case 3 : 
            RandomMoney += Random.Range(1,2);
            MoneyMini += RandomMoney;
            petData.money += RandomMoney ;

           
            MoneyMiniText.text = "Money = " + MoneyMini;

            Debug.Log(petData.money);
            petData.SavePetData();
            break;

            case 4 : 
            RandomMoney += Random.Range(1,3);
            MoneyMini += RandomMoney;
            petData.money += RandomMoney ;

            
            MoneyMiniText.text = "Money = " + MoneyMini;

            Debug.Log(petData.money);
            petData.SavePetData();
            break;

            case 5 : 
            RandomMoney += Random.Range(1,3);
            MoneyMini += RandomMoney;
            petData.money += RandomMoney ;

            MoneyMiniText.text = "Money = " + MoneyMini;

            Debug.Log(petData.money);
            petData.SavePetData();
            break;
        }
    }

}




package com.javarush.task.task06.task0622;

import java.io.BufferedReader;
import java.io.InputStreamReader;

/* 
Числа по возрастанию
*/

public class Solution {
    public static void main(String[] args) throws Exception {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

        int number1=Integer.parseInt(reader.readLine());
        int number2=Integer.parseInt(reader.readLine());
        int number3=Integer.parseInt(reader.readLine());
        int number4=Integer.parseInt(reader.readLine());
        int number5=Integer.parseInt(reader.readLine());
int[] numbers;
numbers= new int[5];
numbers[0]=number1;
numbers[1]=number2;
numbers[2]=number3;
numbers[3]=number4;
numbers[4]=number5;
int min;
int indmin;
int buf;

for (int i=0;i<=4;i++){
    min=numbers[i];
    indmin=i;


    for (int j=i;j<=4;j++){
        if (numbers[j]<min) {
            min = numbers[j];
            indmin=j;
        }
    }
    buf=numbers[i];
    numbers[i]=min;
    numbers[indmin]=buf;

}

        for (int i=0;i<=4;i++) {
            System.out.println(numbers[i]);
        }

    }
}


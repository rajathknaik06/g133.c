/*Manpreet is exploring the world of string manipulations and wants to create a program that transforms strings based on specific rules.



Help Manpreet by developing a program that takes three input strings and performs the following:



Replace vowels in the first string str1 with '$'.
Replace consonants in the second string str2 with '#'.
Convert all lowercase letters in the third string str3 to uppercase.
Finally, concatenate the modified strings and display the result.


Write a program that takes three strings as input and performs the specified transformations, providing Manpreet with the desired output.

Input format :
The first line of input consists of the string, representing str1.

The second line consists of the string, representing str2.

The third line consists of the string, representing str3.

Output format :
The output displays a single line string, representing the modified and concatenated string without any space.*/

#include<stdio.h>

int main(){
    char str1[100], str2[100], str3[100];
    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);
    for(int i = 0; str1[i] != '\0'; i++){
        char ch = str1[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                str1[i] = '$';
        }
    }
    for(int i = 0; str2[i] != '\0'; i++){
        char ch = str2[i];
        if(!(ch == 'a' || ch == 'e' || ch == 'i'|| ch == 'o' || ch == 'u')){
            str2[i] = '#';
        }
    }
    for(int i = 0; str3[i] != '\0'; i++){
        if(str3[i] >= 'a' && str3[i] <= 'z') {
            str3[i] = 'A' + (str3[i] - 'a');
            
        }
    }
    int idx = 0;
    while(str1[idx++] != '\0');
        idx--;
    int i;
    for(int i = 0; str2[i] != '\0'; i++){
        str1[idx++] = str2[i];
    }
    for(int i = 0; str3[i] != '\0'; i++){
        str1[idx++] = str3[i];
    }
    str1[idx] = '\0';
    printf("%s", str1);
    return 0;
}


//another method

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        String str1 = sc.next();
        String str2 = sc.next();
        String str3 = sc.next();
        
        StringBuilder sb1 = new StringBuilder(str1);
        for (int i = 0; i < sb1.length(); i++) {
            char ch = sb1.charAt(i);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                sb1.setCharAt(i, '$');
            }
        }

        StringBuilder sb2 = new StringBuilder(str2);
        for (int i = 0; i < sb2.length(); i++) {
            char ch = sb2.charAt(i);
            if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
                sb2.setCharAt(i, '#');
            }
        }

        StringBuilder sb3 = new StringBuilder(str3);
        for (int i = 0; i < sb3.length(); i++) {
            char ch = sb3.charAt(i);
            if (ch >= 'a' && ch <= 'z') {
                sb3.setCharAt(i, (char) ('A' + (ch - 'a')));
            }
        }

        String result = sb1.toString() + sb2.toString() + sb3.toString();
        
        System.out.print(result);
    }
}

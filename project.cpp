#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y){
COORD c;
c.X=x;
c.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

int main() {
    char ch;
    gotoxy(30,8);
     printf("Username: ");
        FILE *file3;
   char namee[100];
    file3 = fopen("login.txt", "a");
    gets(namee);
    fputs(namee,file3);
    fclose(file3);

     gotoxy(30,9);
     char password[20];
     printf("Password: ");
     gets(password);
     system("CLS");
            if(strcmp(password,"1234")==0){


    string a,b,c,f;

    gotoxy(30,5);
    printf("$$$$ WELCOME SECATION 'B' $$$$");
    gotoxy(30,7);
    printf("1. Student Information");
    gotoxy(30,8);
    printf("2. Student Rank");
    gotoxy(30,9);
    printf("3. Leading University");
    gotoxy(30,10);
    printf("4. Blood Group & Contact Number");
    gotoxy(30,11);
    printf("5. For EXIT");
    gotoxy(30,13);
    printf("Enter any number : ");

    int aa;
    while(scanf("%d",&aa)!=EOF){

            if(aa==1){
                system("CLS");
    gotoxy(30,5);
    printf("Remember First Letter Uppre Case ");
    gotoxy(30,7);
    printf("Enter id/nick name : ");

    cin>>a;
     system("CLS");
    cout<<endl;

    if(a=="Rahe" || a=="1912020058" || a=="Estheak"){
    FILE *file;
    file = fopen("58.txt", "r");
    while(!feof(file)){
        ch=fgetc(file);
        printf("%c",ch);
    }
    fclose(file);
    cout<<endl;
    initwindow(688,388,"insert image");
    readimagefile("58.jpg",0,0,688,388);
    getche();

    }

    #include "all_condition.h"   ///akane baki shob condition royese;

    else {
         FILE *file2;
    file2 = fopen("90.txt", "r");
    while(!feof(file2)){
        ch=fgetc(file2);
        printf("%c",ch);
    }
    fclose(file2);
    printf("\n \n \n");

    }
    cout<<"Press Enter ";
     getche();
    system("CLS");
            }


   else if(aa==2){


            system("CLS");
             FILE *file2;
    file2 = fopen("rank.txt", "r");
    while(!feof(file2)){
        ch=fgetc(file2);
        printf("%c",ch);
    }
    fclose(file2);
    cout<<endl;
    cout<<endl;

        printf("\n");
        cout<<"Press Enter";
        getche();
        system("CLS");
   }

       else if(aa==3){


        system("CLS");
    FILE *file2;
    file2 = fopen("LU.txt", "r");
    while(!feof(file2)){
        ch=fgetc(file2);
        printf("%c",ch);
    }
    fclose(file2);
    cout<<endl;
     printf("\n \n");
     printf("Press Enter");
    getche();
    system("CLS");

       }


   else if(aa==4){

            system("CLS");
             FILE *file2;
    file2 = fopen("Blood.txt", "r");
    while(!feof(file2)){
        ch=fgetc(file2);
        printf("%c",ch);
    }
    fclose(file2);
    cout<<endl;
    cout<<endl;

         cout<<"Press Enter";
        getche();
        system("CLS");
    }

       else if(aa==5){
        break;
       }
       gotoxy(30,5);
       printf("if you back home type 'yes'");
       gotoxy(30,6);
       printf("Else type 'no' : ");
       string kk;
       cin>>kk;
       if(kk=="yes"){
            system("CLS");
    gotoxy(30,5);
    printf("$$$$ WELCOME SECATION 'B' $$$$");
    gotoxy(30,7);
    printf("1. Student Information");
    gotoxy(30,8);
    printf("2. Student Rank");
    gotoxy(30,9);
    printf("3. Leading University");
    gotoxy(30,10);
    printf("4. Blood Group & Contact Number");
    gotoxy(30,11);
    printf("5. For EXIT");
    gotoxy(30,13);
    printf("Enter any number : ");
       }
       else{
        break;
       }
    }
  }
    else{
        printf("\n\n");
        printf("\t\t\t   Invalid password\n");
        printf("\t\t\tEnter 4 degit password\n\n");
    }

    cout<<endl;
    cout<<"Press Enter";
    getche();
    system("CLS");

    FILE *file2;
    file2 = fopen("tnx.txt", "r");
    while(!feof(file2)){
        ch=fgetc(file2);
        printf("%c",ch);
    }
    fclose(file2);
    initwindow(688,388,"insert image");
    readimagefile("group.jpg",0,0,688,388);
    getch();
}




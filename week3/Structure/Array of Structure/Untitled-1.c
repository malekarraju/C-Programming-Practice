    #include<stdio.h>
        //nested structre 
        struct college
        {
        char clg_name[20];
        int ranking;
            struct student
            {
                char name[20];
                int roll;
                float per;
            }st[2];
        };

        // function
        struct college accept_details(struct college c1,int size); 
        void print_details(struct college c2);

        //main 
        int main()
        {
        int size;
        printf("enter the size : ");
        scanf("%d",&size);

        struct college c1;
        struct college c2=accept_details(c1,size);
        
        print_details(c2);
        }

        struct college accept_details(struct college c1,int size)
        {
            
                printf("\nenter the details : \n");
                printf("enter the college name : \n");
                scanf("%s",c1.clg_name);
                while(getchar()!='\n'); // scanf("%s") nantar input buffer madhye urlela ek whitespace/newline character remove karnyasathi use kela aahe.

                printf("enter the college ranking : \n");
                scanf("%d",&c1.ranking);
                getchar();

                for(int j=0;j<size;j++)
                {
                    printf("\n----enter student details---- \n");
                    printf("enter student name : ");
                    scanf("%s",c1.st[j].name);
                    while( getchar()!='\n'); // same whitesapce la tackel kranyasthi use krto

                    printf("enter student roll no : ");
                    scanf("%d",&c1.st[j].roll);

                    printf("enter student percentage : ");
                    scanf("%f",&c1.st[j].per);
                    getchar();
                    printf("------------------------------------\n");
                }
            
                return c1;

        }
        void print_details(struct college c2)
        {
        printf("\n=============college details===========\n");
        printf("name of company is : %s\n",c2.clg_name);
        printf("id of company is : %d\n",c2.ranking);
        for(int i=0;i<2;i++)
        {
        printf("\n=============student details===========\n");
        printf("name of student is : %s\n",c2.st[i].name);
        printf("percentage of student is : %f\n",c2.st[i].per);
        printf("roll of student is : %d\n",c2.st[i].roll);
        }
        }  // not working dekh jra kya problem hai isme



 // #include<stdio.h>
    // //nested structre 
    // typedef struct college
    // {
    // char clg_name[20];
    // int ranking;
    //     struct student
    //     {
    //         char name[20];
    //         int roll;
    //         int per;
    //     }st[50];
    // }college;

    // //function
    // college accept_details(college c1,int size); 

    // //main 
    // int main()
    // {
    // int size;
    // printf("enter the size : ");
    // scanf("%d",&size);

    // college c1;
    // college c2=accept_details(c1,size);

    // }

    // college accept_details(struct college c1,int size)
    // {
        
    //         printf("\nenter the details : \n");
    //         printf("enter the college name : \n");
    //         scanf("%s",c1.clg_name);
    //         while(getchar()!='\n'); // scanf("%s") nantar input buffer madhye urlela ek whitespace/newline character remove karnyasathi use kela aahe.
    //         printf("enter the college ranking : \n");
    //         scanf("%d",&c1.ranking);

    //         for(int j=0;j<size;j++)
    //         {
    //             printf("\n----enter student details---- \n");
    //             printf("enter student name : ");
    //             scanf("%s",c1.st[j].name);
    //             while(getchar()!='\n');  // same whitesapce la tackel kranyasthi use krto

    //             printf("enter student roll no : ");
    //             scanf("%d",&c1.st[j].roll);

    //             printf("enter student percentage : ");
    //             scanf("%d",&c1.st[j].per);
    //             printf("------------------------------------\n");
    //         }
        
    //         return c1;

    // }
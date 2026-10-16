    #include <stdio.h>

    int main()
    {
        char name[100];
        int vowel = 0, consonant = 0;

        printf("Enter a string: ");
        fgets(name, sizeof(name), stdin);

        for(int i = 0; name[i] != '\0'; i++)
        {
            if((name[i] >= 'A' && name[i] <= 'Z') ||
            (name[i] >= 'a' && name[i] <= 'z'))
            {
                if(name[i] == 'A' || name[i] == 'E' || name[i] == 'I' ||
                name[i] == 'O' || name[i] == 'U' ||
                name[i] == 'a' || name[i] == 'e' || name[i] == 'i' ||
                name[i] == 'o' || name[i] == 'u')
                {
                    vowel++;
                }
                else
                {
                    consonant++;
                }
            }
        }

        printf("Number of Vowels = %d\n", vowel);
        printf("Number of Consonants = %d\n", consonant);

        return 0;
    }
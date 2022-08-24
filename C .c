int main()
{
        int input, num;

        printf("Enter Number: ");
        scanf("%d",&input);

        num = 1;
        for(int i=1; i<=input; i++)
        {

                for(int j=1; j<=(input-i); j++)
                {
                        printf("  ");
                }

                for(int k=1; k <= 2*i-1; k++)
                {
                        printf(" ");
                        printf("%d",num++);
                }

                printf("\n");
        }

        for(int i=input-1; i>=1; i--)
        {

                for(int j=input; j>=i; j--)
                {
                        printf("  ");
                }
                for(int k=1; k<=2*i-1; k++)
                {
                        printf("%d",num++);
                }

                printf("\n");
        }

        return 0;
} 
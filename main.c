#include <stdio.h>
#include <stdlib.h>

void conversion (int *nNbre, char *cRomain);

int main()
{
    int nNbre=0;
    char cRomain;

    conversion (&nNbre, &cRomain);

    printf("%c\n", cRomain);

    return 0;
}

void conversion (int *nNbre, char *cRomain);
{
    printf("Bienvenue. Veuillez entrer un entier.\n");
    scanf("%d", &nNbre);

    if (*nNbre>=0 && *nNbre<=3999) /*Test du nombre, peut-il �tre traduit ?*/
    {
        printf("Il semblerait que ce nombre soit impossible � traduire.");
        printf("Recommencez avec un nombre valide !");
    }

    if (*nNbre<=1000 && *nNbre>4000) /*Si le nombre est sup�rieur � mille, on rajoute un M au r�sultat.*/
    {
        do
        {
        *cRomain=*cRomain+'M';
        *nNbre=*nNbre-1000;
        } while (*nNbre<1000); /*On enl�ve autant de mille qu'il faut, jusqu'� arriver aux centaines. Et on ajoute un M � chaque mille retir�.*/
    }

        if (*nNbre<=900 && *nNbre>=999)/*Ici, pas le choix, on met un chiffre particulier (vaut pour tous les 9.. et 4..)*/
        {
            *cRomain=*cRomain+'CM';
            *nNbre=*nNbre-900;
        }
        else if (*nNbre<=500 && *nNbre>=899)/*Si le nombre vaut entre 500 et 800, on met un D au r�sultat*/
        {
            *cRomain=*cRomain+'D';
            *nNbre=*nNbre-500;
            while (*nNbre<100)
            {
                *cRomain=*cRomain+'C'; /*Tant qu'no arrive pas aux dizaines, on enl�ve 10 au nombre,et on rajoute un C au r�sultat*/
                *nNbre=*nNbre-100;
            }
        }
        else if (*nNbre<=400 && *nNbre>=499)
        {
            *cRomain=*cRomain+'CD';
            *nNbre=*nNbre-400;
        }
        else (*nNbre<100 && *nNbre>=399)/*On fait la m�me chose que pour les 500*/
        {
            do
            {
            *cRomain=*cRomain+'C';
            *nNbre=*nNbre-100;
            } while (*nNbre>100);
        }

            if (*nNbre<=90 && *nNbre>=99)
            {
                *cRomain=*cRomain+'XC';
                *nNbre=*nNbre-90;
            }
            else if (*nNbre<=50 && *nNbre>=89)
            {
                *cRomain=*cRomain+'L';
                *nNbre=*nNbre-50;
                while (*nNbre<10)
                {
                    *cRomain=*cRomain+'X';
                    *nNbre=*nNbre-10;
                }
            }
            else if (*nNbre<=40 && *nNbre>=49)
            {
                *cRomain=*cRomain+'XL';
                *nNbre=*nNbre-40;
            }
            else (*nNbre<10 && *nNbre>=39)
            {
                do
                {
                *cRomain=*cRomain+'X';
                *nNbre=*nNbre-10;
                } while (*nNbre>10);
            }

                if (*nNbre<=9 && *nNbre>=9)
                {
                    *cRomain=*cRomain+'IX';
                }
                else if (*nNbre<=5 && *nNbre>=8)
                {
                    *cRomain=*cRomain+'V';
                    *nNbre=*nNbre-5;
                    while (*nNbre<1)
                    {
                        *cRomain=*cRomain+'I';
                        *nNbre=*nNbre-1;
                    }
                }
                else if (*nNbre=4)
                {
                    *cRomain=*cRomain+'IV';
                }
                else (*nNbre<1 && *nNbre>=3)
                {
                    do
                    {
                    *cRomain=*cRomain+'I';
                    *nNbre=*nNbre-1;
                    } while (*nNbre=0);
                }

    if (*nNbre<=900 && *nNbre>=999) /*R�p�tition des instructions en fonction du nombre entr�*/
        {
            *cRomain=*cRomain+'CM';
            *nNbre=*nNbre-900;
        }
    else if (*nNbre<=500 && *nNbre>=899)
    {
        *cRomain=*cRomain+'D';
        *nNbre=*nNbre-500;
        while (*nNbre<100)
        {
            *cRomain=*cRomain+'C';
            *nNbre=*nNbre-100;
        }
    }
    else if (*nNbre<=400 && *nNbre>=499)
    {
        *cRomain=*cRomain+'CD';
        *nNbre=*nNbre-400;
    }
    else (*nNbre<100 && *nNbre>=399)
    {
        do
        {
        *cRomain=*cRomain+'C';
        *nNbre=*nNbre-100;
        } while (*nNbre>100);
    }

        if (*nNbre<=90 && *nNbre>=99)
        {
            *cRomain=*cRomain+'XC';
            *nNbre=*nNbre-90;
        }
        else if (*nNbre<=50 && *nNbre>=89)
        {
            *cRomain=*cRomain+'L';
            *nNbre=*nNbre-50;
            while (*nNbre<10)
            {
                *cRomain=*cRomain+'X';
                *nNbre=*nNbre-10;
            }
        }
        else if (*nNbre<=40 && *nNbre>=49)
        {
            *cRomain=*cRomain+'XL';
            *nNbre=*nNbre-40;
        }
        else (*nNbre<10 && *nNbre>=39)
        {
            do
            {
            *cRomain=*cRomain+'X';
            *nNbre=*nNbre-10;
            } while (*nNbre>10);
        }

            if (*nNbre<=9 && *nNbre>=9)
            {
                *cRomain=*cRomain+'IX';
            }
            else if (*nNbre<=5 && *nNbre>=8)
            {
                *cRomain=*cRomain+'V';
                *nNbre=*nNbre-5;
                while (*nNbre<1)
                {
                    *cRomain=*cRomain+'I';
                    *nNbre=*nNbre-1;
                }
            }
            else if (*nNbre=4)
            {
                *cRomain=*cRomain+'IV';
            }
            else (*nNbre<1 && *nNbre>=3)
            {
                do
                {
                *cRomain=*cRomain+'I';
                *nNbre=*nNbre-1;
                } while (*nNbre=0);
            }
}

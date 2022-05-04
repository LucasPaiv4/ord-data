#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int[], int);
void selectionSort(int[], int);
void insertionSort(int[], int);

int main()
{
    int vetor[] = {64, 30, 25, 12, 4, 20, 150, 300, 50, 35, 5, 700};
    int k, tam = sizeof(vetor) / sizeof(vetor[0]);
    insertionSort(vetor, tam);
    // bubbleSort(vetor, tam);
    //  selectionSort(vetor, tam);

    // printf("%d", m);

    for (k = 0; k < tam; k++)
    {
        printf("\n%d", vetor[k]);
    }

    return 0;
}

void bubbleSort(int v[], int tam)
{
    int i, j, aux;
    for (i = 1; i < tam; i++)
    {
        for (j = 0; j < tam - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

void selectionSort(int v[], int tam)
{
    int i, j, min, aux;
    for (i = 0; i < tam - 1; i++)
    {
        min = i;
        for (j = i + 1; j < tam; j++)
        {
            if (v[j] < v[min])
            {
                min = j;
            }
            aux = v[min];
            v[min] = v[i];
            v[i] = aux;
        }
    }
}

void insertionSort(int v[], int tam)
{
    int i, j, aux;

    for (i = 1; i < tam; i++)
    {
        aux = v[i];
        for (j = i - 1; j >= 0 && aux < v[j]; j--)
        {
            v[j + 1] = v[j];
        }
        v[j + 1] = aux;
    }
}
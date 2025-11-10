typedef int t_vec[8];
int main()
{
    t_vec dni = {3, 2, 2, 2, 3, 4, 6, 8};
    int ml = 8;
    ordenar_digitos_dni(dni, ml);
    return 0;
}
void ordenar_digitos_dni(t_vec dni, int ml)
{
    int i, j, aux;
    for (i = 1; i < ml; i++)
    {
        for (j = 0; j < ml - i; j++)
        {
            if (dni[j] > dni[j + 1])
            {
                aux = dni[j];
                dni[j] = dni[j + 1];
                dni[j + 1] = aux;
            }
        }
    }
}

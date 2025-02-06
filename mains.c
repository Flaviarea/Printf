int ft_printf(const char *str, ...)

int main()
{
    int count;

    // Test: Stampa normale
    count = ft_printf("Hell%, world!\n");
    printf("Caratteri stampati: %d\n", count);
    return 0;
}

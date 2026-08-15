void	ft_ultimate_div_mod(int *a, int *b)
{
	int aux_a;
	int aux_b;

	aux_a = *a / *b;
	aux_b = *a % *b;
	*a = aux_a;
	*b = aux_b;
}

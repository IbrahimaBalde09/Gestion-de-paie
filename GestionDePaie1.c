#include <stdio.h>

int main() {
    float taux_horaire, heures_travaillees, primes, salaire_brut;
    float cotisations_sociales, salaire_net;
    const float POURCENTAGE_COTISATIONS = 0.22;  

    printf("Entrez le taux horaire en euros : ");
    scanf("%f", &taux_horaire);

    printf("Entrez le nombre d'heures travaillees dans le mois : ");
    scanf("%f", &heures_travaillees);

    printf("Entrez le montant des primes (en euros) : ");
    scanf("%f", &primes);

    salaire_brut = (taux_horaire * heures_travaillees) + primes;

    cotisations_sociales = salaire_brut * POURCENTAGE_COTISATIONS;

    salaire_net = salaire_brut - cotisations_sociales;

    printf("\n--- Récapitulatif ---\n");
    printf("Salaire brut : %.2f euros\n", salaire_brut);
    printf("Cotisations sociales (%.2f%%) : %.2f euros\n", POURCENTAGE_COTISATIONS * 100, cotisations_sociales);
    printf("Salaire net : %.2f euros\n", salaire_net);

    return 0;
}

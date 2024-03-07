#include <stdio.h>

void print_menu();
int gioca_partita();

int main()
{

       char scelta = {'\0'};

       print_menu();

       scanf(" %c", &scelta);

       if (scelta == 'B')
       {
              printf("grazie per aver giocato, alla prossima\n");
              return 0;
       }
       while (scelta == 'A')
       {
              gioca_partita();
              print_menu();
              scanf(" %c", &scelta);
       }

       return 0;
}

void print_menu()

{
       printf("start menu:\n");
       printf("A >> iniziare una nuova partita\nB >> uscire dal gioco\n");
       printf("inserisci la lettera corrispondene alla tua scelta:");
}

int gioca_partita()

{
       int punteggio = 0;
       char nome[20] = {'\0'};
       char risposta1, risposta2;
       printf("inserisci il tuo nome:\n");
       scanf(" %s", &nome);

       printf("domanda numero 1:\n");
       printf("quale è la capitale della germania?\n");
       printf("A >>> berlino 1\nB >>> tokyo 2\nC >>> madrid 3\n");
       printf("inserisci la tua risposta:\n");
       scanf(" %c", &risposta1);

       if (risposta1 == 'A')
       {
              punteggio++;
       }

       printf("domanda numero 2:\n");
       printf("chi è il più bravo della classe?\n");
       printf("A >>> christopher 1\nB >>> raffi 2\nC >>> federico 3\n");
       printf("inserisci la tua risposta:\n");
       scanf(" %c", &risposta2);

       if (risposta2 == 'A')
       {
              punteggio++;
       }

       printf("partita conclusa, punteggio totalizzato da %s:%d\n", nome, punteggio);

       return 0;
}

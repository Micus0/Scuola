# Informatica
## Es automi pag 152

### 1

Errori di B e C per riconoscere sempre ADA:
- SO, S1, S2
  - una volta ricevuto B o C
  - --> l'automa torna o resta in S0 con uscita 0
    - altrimenti rompono la sequenza utile

### 2

5 stati
- S0 (iniziale): 1 --> S1, 0 --> S0
- S1 (letto 1): 1 --> S2, 0 --> S0
- S2 (letto 11): 0 --> S3, 1 --> S2
- S3 (letto 110): 0 --> S4, 1 --> S1
- S4 (letto 1100): 1 --> S0 (uscita R), 0 --> S0 (uscita 0)

Torna a S0

### 3

- se ricevi uno nello stato S4
  - non torna a S0, automa va nello stato in cui inizia nuova sequenza sovrapposta

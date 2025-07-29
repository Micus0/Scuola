# Informatica
## Database

DBMS:
- data/base/management/system
- prima: organizzazione ridondante
  - dati memorizzata più volte
  - svantaggi
    - costo aggiuntivo generazione e memorizzazione
    - complessità operazioni
    - impossibilità archivi stesso livello
    - incongruenza
      - aggiornamento dati
    - incosistenza
      - interrogazione
    - concorrenza
      - programmi attivi contemporaneamente
- si occupa della parte complicata
- strato intermedio tra utente e software
- caratteristiche
  - gestione base di dati
  - persistenza e consistenza dei dati
  - privacy e sicurezza dei dati
  - integrità dei dati
  - supporto alle transazioni
  - gestione del dizionario dei dati
- tanti sistemi opensource
  - es postgres
- livello fisico:
  - effettiva memorizzazione dati
- livello concettuale:
  - struttura logica

Progettazione database
- metodologia
  - specifiche interessi
    - linguaggio naturale
  - analisi problema
    - analisi interessi
    - specifiche dati e funzioni
    - analisi dati e funzioooni
    - specifiche formali
    - progettazione
    - tabelle e algoritmi
      - istanze entità
        - con attributi per indicare le varie colonne
      - caratteri hash per indicare dati


Entità
- attributi
- attributi derivati

Tipo associazioni:
- biunivoca
  - 1:1
- semplice
  - 1:N
- diretta/inversa
- totale/parziale

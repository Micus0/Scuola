# Informatica
## Rappresentazione logica

- mapping associazioni
  - analisi del dominio
    - identificazione delle entità rilevanti
    - definizione delle associazioni tra entità
    - riconoscimento di attributi e vincoli semantici
- Formalizzazione logica
  - Definizione dei predicati
    - Ogni associazione è rappresentata come un predicato logico
    -  Le entità coinvolte diventano argomenti del predicato.
    Esempio: Relazione(x, y)
  - Specifica di dominio e codominio
    - Si definiscono i tipi di oggetti ammessi nei ruoli del predicato
      - Esempio: ∀x∀y (Relazione(x, y) → Entità1(x) ∧ Entità2(y))
  - Esplicitazione dei vincoli
    - Cardinalità: vincoli sul numero di occorrenze ammesse
      - Esempio: ∀x (∃≤1 y. Relazione(x, y))
    - Funzionalità e inverse: proprietà delle relazioni
      - Esempio: Funzionale(Relazione) → ogni x è legato a un solo y
    - Vincoli logici aggiuntivi: esclusione, obbligatorietà, ecc.
  - Uso di linguaggi formali
    - Logica del primo ordine (FOL): per rappresentazioni generali
    - Datalog: per basi di dati deduttive
    - OWL (Web Ontology Language): per ontologie nel web semantico
  - Assiomi e regole di inferenza
    - Formulazione di regole per dedurre nuove associazioni
      - Esempio: Relazione(x, y) ∧ Proprietà(y, z) → NuovaRelazione(x, z)


# Exercise

Hallo Leute!

Willkommen bei der nächsten Programmier-Übung in diesem Kurs.

## Aufgaben der Programmierübung

- Erstelle eine Datei mit zufälligen Int Werten
- Lese die Werte der Datei ein (Dateiname und Länge als argv einlesen)
- Sortiere die Werte der Datei*
- Speichere die sortierten Werte in der Datei wieder ab

* Dies ist unsere Sortier-Funktion:

```c
int comp(const void *elem1, const void *elem2)
{
    int l = *((int *)elem1);
    int r = *((int *)elem2);

    if (l > r)
        return 1;
    if (r > l)
        return -1;
    else
        return 0;
}
```

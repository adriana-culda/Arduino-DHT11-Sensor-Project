# Arduino-DHT11-Sensor-Project

Acest proiect utilizează un controller **Arduino Uno** și un senzor **DHT11** pentru a monitoriza temperatura și umiditatea dintr-o încăpere. Sistemul nu doar afișează datele, dar și acționează automat prin intermediul a două LED-uri pentru a indica dacă parametrii se află în intervalul de confort.

Funcționalități
* **Monitorizare în timp real:** Citirea valorilor la fiecare 2 secunde.
* **Indicatori de confort:** * **LED Umiditate (Pin 6):** Se aprinde când umiditatea este între 40% și 60%.
* **LED Temperatură (Pin 7):** Se aprinde când temperatura este între 22°C și 30°C.
* **Sistem de siguranță:** Detectează automat dacă senzorul este deconectat și raportează eroarea în Serial Monitor.

Componente necesare
* 1x Arduino Uno (sau orice placă compatibilă)
* 1x Senzor DHT11 (senzorul albastru)
* 2x LED-uri (Culori diferite pentru Temperatură/Umiditate)
* 2x Rezistențe 220Ω
* Breadboard și fire de legătură (Jumper wires)

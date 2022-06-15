# DVIGALO 

## Simulacija Dvigal z Arduino 

__DVIGALO za tovorjenje hrane 1__: V restavraciji je jedilnica v drugem nadstropju kot kuhinja. Zato je vgrajeno dvigalo (vrtenje motorja naprej/nazaj preko tranzistorja) za tovorjenje hrane. Za pomik gor (vrtenje motorja v eno smer) je potrebno držati tipko GOR. Dviganje se konča, ko doseže dvigalo zgornji položaj, kar zazna senzor Kzg. Pomik dol poteka, če držimo tipko DOL. Ko dvigalo doseže spodnji položaj (senzor Ksp) se spuščanje ustavi. Hkratni pritisk obeh tipk naj krmilje ignorira. Če je dvigalo v gibanju, to signalizira rdeča LED. Senzorje

Spremeljivka __i__ je namesto senzoraja kar pomeni da ko i v programu došeže neko stevilo se nekaj zgodi.

### Priredbeni seznam

__Vhodi__:

| Oznaka v načrtu | Naslov operanda | Vrst Kontakta |Pomen        |
| :-------------: | :-------------: | :-----------: | :---------: |   
| S1              |   but_G         |  Tipkalo N.O  | premik GOR  |
| S2              |   but_D         |  Tipkalo N.O  | premik DOL  |
| /               |   i             |  Tipkalo N.O  | Senzor GOR  |
| /               |   i             |  Tipkalo N.O  | Senzor DOL  |

__i__ je v tem primiru uprabljen kot senzor gko dvigalo pride do pozicije GOR ali do pozicije DOL

__izhodi__:

| Oznaka v načrtu | Naslov operanda | Vrst Kontakta |Pomen                |
| :-------------: | :-------------: | :-----------: | :-----------------: |   
| LED1            |   LED           |  LED          | Premikanje Dvigala  |




### Slike:


![](https://github.com/AV-35/Dvigalo/blob/main/media/IMG_3437.jpg)

![](https://github.com/AV-35/Dvigalo/blob/main/media/Schematic.PNG)

## Schematic Dvigal mitubishi/EasySoft

[embed](https://github.com/AV-35/Dvigalo/Schematic_Divgalo_Mitsubisi&EasySoft.pdf)[/embed]





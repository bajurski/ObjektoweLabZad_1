ObjektoweLabZad_1
Zadanie 1 z programowania objektowego.
1. Proszę o utworzenie klasy „Samochod”.

2. Proszę o utworzenie prywatnych pól klasy „Samochod” o nazwie: „marka”, „model”, „iloscDrzwi”, „pojemnoscSilnika”, „srednieSpalanie”. 
	Proszę zwrócić uwagę na odpowiedni dobór typów pól.
	
3. Proszę o utworzenie właściwości dostępowych do wszystkich pól

4. Proszę o utworzenie w klasie „Samochod” prywatnego statycznego pola typu int o nazwie „iloscSamochodow” i przypisanie mu wartości 0

5. Proszę o utworzenie konstruktora domyślnego, który wszystkim polom przyporządkowuje wartości: „nieznana” lub „nieznany” dla pól typu string, 
	„0” dla pól typu int, „0.0” dla pól typu double. 
	Wywołanie konstruktora powinno zwiększać o 1 wartość pola statycznego „iloscSamochodow”. 
	Proszę pamiętać o tym, że konstruktor domyślny nie przyjmuje żadnych parametrów.
	
6. Proszę o utworzenie konstruktora, przyjmującego następujące parametry: „marka_”, „model_”, „iloscDrzwi_”, „pojemnoscSilnika_”, „srednieSpalanie_”. 
	Typy parametrów powinny odpowiadać typom pól klasy „Samochod”. Konstruktor ma przekazywać wartości parametrów polom. 
	Wywołanie konstruktora powinno zwiększać o 1 wartość pola statycznego „iloscSamochodow”.
	
7. Proszę o utworzenie prywatnej metody „ObliczSpalanie” zwracającej wartość typu double i przyjmującej parametr „dlugoscTrasy” typu double. 
	Metoda ta ma obliczać spalanie samochodu na podstawie podanej wartości długości trasy i wartości pola „srednieSpalanie”. 
	Spalanie obliczamy według wzoru:
	 spalanie = (srednieSpalanie * dlugoscTrasy) / 100.0;
	 
8. Proszę o utworzenie publicznej metody „ObliczKosztPrzejazdu” zwracającej wartość typu double i przyjmującej parametry „dlugoscTrasy” typu double i „cenaPaliwa” typu double. 
	Metoda ta ma obliczać koszt przejazdu na trasie o podanej długości, zakładając podaną cenę paliwa za litr. 
	Metoda ta ma wykorzystywać prywatną metodę „ObliczSpalanie”. 
	Koszt przejazdu obliczamy według wzoru:
	kosztPrzejazdu = spalanie * cenaPaliwa;
	
9. Proszę o utworzenie publicznej metody „WypiszInfo” zwracającej wartość typu void i nie przyjmującej żadnych parametrów. 
	Metoda ta ma wypisywać na ekranie konsoli wartości wszystkich pól klasy „Samochod”. Np.:  Console.WriteLine("Marka: " + marka);
	
10. Proszę o utworzenie publicznej statycznej metody „WypiszIloscSamochodow” zwracającej wartość typu void i nie przyjmującej żadnych parametrów. 
	Metoda ta ma wypisywać na ekranie konsoli wartość pola statycznego „iloscSamochodow”
	
11. Proszę o przetestowanie poprawności wykonania zadania za pomocą kodu testowego

Ćwiczenie_1_2
1. Aplikacja z Ćwiczenia 1 ma zostać uzupełniona o klasę "Garaz"
2. Proszę o utworzenie prywatnych pól klasy „Garaz” o nazwie: „adres”, „pojemnosc”, „liczbaSamochodow”, „samochody”. 
   	Pole „samochody” powinno posiadać typ tablicowy, przechowujący obiekty klasy „Samochod”:
		private Samochod[] samochody;
	Pole „liczbaSamochodow” powinno być zainicjowane wartością „0”
		private int liczbaSamochodow = 0;

3. Proszę o utworzenie właściwości dostępowych do pól „adres” i „pojemnosc”. Właściwość „Set” pola „pojemność” powinna przydzielać także pamięć polu „samochody”:
	set
	{
		pojemnosc = value;
		samochody = new Samochod[pojemnosc];
	}

4. Proszę o utworzenie konstruktora domyślnego, który wszystkim polom przyporządkowuje wartości: „nieznana” lub „nieznany” dla pól typu string, „0” dla pól typu int, „null” dla pól typu tablicowego. 
	Proszę pamiętać o tym, że konstruktor domyślny nie przyjmuje żadnych parametrów. Proszę zauważyć, że pole „liczbaSamochodow” zostało już zainicjowane i nie jest konieczne przypisanie mu wartości w ciele konstruktora.

5. Proszę o utworzenie konstruktora, przyjmującego następujące parametry: „adres_”, „pojemnosc_”. Typy parametrów powinny odpowiadać typom pól klasy „Garaz”. 
	Konstruktor ma przekazywać wartości parametrów polom. Wywołanie konstruktora powinno przydzielić pamięć polu „samochody”, tworząc tablicę o rozmiarze odpowiadającym wartości pola „pojemnosc”.

6. Proszę o utworzenie publicznej metody „WprowadzSamochod”, zwracającej wartość typu void i przyjmującej parametr typu Samochod. Metoda ta ma sprawdzać, czy garaż jest zapełniony. 
	Jeśli tak, ma wypisywać na ekranie konsoli odpowiedni komunikat. Jeśli nie jest zapełniony, ma wprowadzić do niego dany samochód. 
	Nowy samochód powinien być dodany do tablicy za znajdującymi się w niej obiektami typu Samochod. 
	Do określenia tej pozycji ma służyć wartość pola „liczbaSamochodow”, która po wprowadzeniu nowego samochodu powinna być odpowiednio zmodyfikowana.

7. Proszę o utworzenie publicznej metody „WyprowadzSamochod”, zwracającej wartość typu Samochod i nie przyjmującej żadnych parametrów. Metoda ta ma sprawdzać, czy garaż jest pusty. 
	Jeśli tak, ma wypisywać na ekranie konsoli odpowiedni komunikat. Jeśli nie jest pusty, ma wyprowadzić z niego ostatnio wprowadzony samochód. 
	Do określenia pozycji samochodu w tablicy ma służyć wartość pola „liczbaSamochodow”, która po wyprowadzeniu nowego samochodu powinna być odpowiednio zmodyfikowana. 
	Po wyłuskaniu obiektu typu Samochod z tablicy, do pozycji na której się znajdował należy podstawić wartość „null”.

8. Proszę o utworzenie publicznej metody „WypiszInfo” zwracającej wartość typu void i nie przyjmującej żadnych parametrów. 
	Metoda ta ma wypisywać na ekranie konsoli wartości wszystkich pól typu prostego klasy „Samochod”. Dodatkowo ma wyświetlać wszystkie informacje dotyczące garażowanych samochodów. 
	Realizacja wyświetlania informacji o samochodach ma opierać się na zastosowaniu pętli „for” oraz metodzie „WypiszInfo” zaimplementowanej w klasie „Samochod”.

9. Proszę o przetestowanie poprawności wykonania zadania za pomocą kodu testowego:
	Samochod s1 = new Samochod("Fiat", "126p", 2, 650, 6.0);
	Samochod s2 = new Samochod("Syrena", "105", 2, 800, 7.6);
	Garaz g1 = new Garaz();
	g1.Adres = "ul. Garażowa 1";
	g1.Pojemnosc = 1;
	Garaz g2 = new Garaz("ul. Garażowa 2", 2);
	g1.WprowadzSamochod(s1);
	g1.WypiszInfo();
	g1.WprowadzSamochod(s2);
	g2.WprowadzSamochod(s2);
	g2.WprowadzSamochod(s1);
	g2.WypiszInfo();
	g2.WyprowadzSamochod();
	g2.WypiszInfo();
	g2.WyprowadzSamochod();
	g2.WyprowadzSamochod();
	Console.ReadKey();
  
  ZADANIE_1
  Do wykonania tego zadania konieczne jest wykonanie Ćwiczenie_1 i Ćwiczenie_1_2
2. Dodaj pole "numerRejestracyjny" do klasy "Samochod". Dobierz odpowiedni typ danych.
3. Dodaj parametr numerRejestracyjny_ (string) do konstruktora niedomyślnego klasy
	"Samochod"
4. Stwórz klasę "Osoba". Obiekty klasy „Osoba” mają przechowywać informacje o posiadanych
	samochodach w formie ich numerów rejestracyjnych (numery te można przechowywać w
	tablicy).
	Proszę zauważyć, że każda osoba może posiadać maksymalnie 3 samochody.
5. Dodaj pola imie, nazwisko, adresZamieszkania i iloscSamochodow = 0 do klasy "Samochod".
	Dobierz odpowiednie typy danych.
6. Stwórz konstruktor domyślny który będzie przypisywał wartości "nieznany"/"nieznana" dla
	łancuchów tekstowych i 0 dla liczb.
7. Stwórz konstruktor przyjmujący jako parametry imie_, nazwisko_, adres_, iloscSamochodow_
	i przypisujący wartości do pól.
8. Stwórz metodę "DodajSamochod" która będzie przyjmować nrRejestracyjny (string) jako
	parametr i nie będzie zwracać żadnej wartości.
	Metoda ma dodawać numer rejestracyjny do kolekcji numerów rejestracyjnych (tabeli) w
	obiekcie typu „Osoba”.
	Przy wywołaniu tej metody należy pamiętać o sprawdzeniu czy osoba może posiadać kolejny
	samochód oraz o zwiększeniu licznika posiadanych samochodów po dodaniu numeru
	rejestracyjnego.
9. Stwórz metodę "UsunSamochod" która będzie przyjmować nrRejestracyjny (string) jako
	parametr i nie będzie zwracać żadnej wartości.
	Metoda ma usuwać numer rejestracyjny podany jako parametr z kolekcji numerów
	rejestracyjnych (tabeli) w obiekcie typu „Osoba”.
	Operację tę można zaimplementować z wykorzystaniem pętli „for”. Usuwanie ma polegać na
	przyporządkowaniu danej pozycji w kolekcji wartości „null”.
	Przy wywołaniu tej metody należy pamiętać o zmniejszeniu licznika posiadanych samochodów
	po usunięciu numeru rejestracyjnego
10. Stwórz metodę "WypiszInfo" która nie będzie przyjmować żadnych parametrów i zwracać
	wartości. Metoda ma wypisywać informacje o osobie oraz numery rejestracyjne posiadanych przez nią
	samochodów.
11. Zabronuj kod testujący nową klasę

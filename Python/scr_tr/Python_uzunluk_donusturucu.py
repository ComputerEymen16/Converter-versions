#baslamak icin Enter tusuna basmasını iste
input("Baslamak icin Enter tusuna basiniz...")

#degisken tanimlama ve kullanicidan deger alma
santimetre = float(input("Santimetre cinsinden degeri giriniz: "))

#donusturme islemleri
metre = santimetre / 100.0
kilometre = santimetre / 100000.0

#sonuçları ekrana yazdırma
print(f"Metre cinsinden deger: {metre:.2f} m")
print(f"Kilometre cinsinden deger: {kilometre:.5f} km")

#terminalin kapanmasi icin Enter tusuna basmasını iste
input("Programi sonlandirmak icin Enter tusuna basiniz...")

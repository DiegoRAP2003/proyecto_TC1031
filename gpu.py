import random

# Lista de nombres de GPU
nombres_gpu = [
    "NVIDIA GeForce RTX 3090", "AMD Radeon RX 6900 XT", "NVIDIA GeForce RTX 3080",
    "AMD Radeon RX 6800 XT", "NVIDIA GeForce RTX 3070", "AMD Radeon RX 6700 XT",
    "NVIDIA GeForce RTX 3060 Ti", "AMD Radeon RX 5700 XT", "NVIDIA GeForce GTX 1660 Ti",
    "AMD Radeon RX 5600 XT", "NVIDIA Quadro P5000", "AMD Radeon VII",
    "NVIDIA Titan RTX", "AMD Radeon RX 480", "NVIDIA Tesla V100",
    "AMD Radeon RX 5500 XT", "NVIDIA A100 Tensor Core", "AMD Radeon Pro WX 7100",
    "NVIDIA GeForce GTX 1080 Ti", "AMD Radeon RX 590", "NVIDIA GeForce GT 1030",
    "AMD Radeon RX 580", "NVIDIA GeForce GTX 1070", "AMD Radeon RX 570",
    "NVIDIA GeForce GTX 1060", "AMD Radeon RX 560", "NVIDIA GeForce GTX 1050 Ti",
    "AMD Radeon RX 550", "NVIDIA GeForce GT 710", "AMD Radeon R9 390X"
]

# Generar datos aleatorios
with open('input_gpu.txt', 'w') as file:
    for _ in range(100):
        name = random.choice(nombres_gpu)
        year = random.randint(2018, 2023)
        price = random.randint(299, 1100)
        max_resolution = random.choice([720, 1080, 2048, 3840])
        random_number = random.randint(1000, 2200)

        file.write(f"{year} {price} {max_resolution} {random_number}\n")

with open('input_gpu_names.txt', 'w') as file:
    for _ in range(100):
        name = random.choice(nombres_gpu)

        file.write(f"{name}\n")

# Lista de nombres procesador
nombres_procesador = ["i3" , "i5" , "i9" , "i10", "Ryzen9" , "Ryzen7" , "Ryzen5"]

# Generar datos aleatorios
with open('input_procesador.txt', 'w') as file:
    for _ in range(100):
        name = random.choice(nombres_procesador)
        year = random.randint(2018, 2023)
        price = random.randint(100, 600)
        frequency = random.choice([3.5, 4.0, 4.5, 5.0])
        temperature = round(random.uniform(30, 85), 2)

        file.write(f"{name} {year} {price} {temperature} {frequency}\n")
        
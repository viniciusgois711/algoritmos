def transfBin(ip):
    for i in range(len(ip)):
        ip[i] = bin(ip[i])[2:].zfill(8)

def transfMascara(mascara):
    novaMascara = ""
    for i in range(32):
        if i < mascara:
            novaMascara += "1"
        else:
            novaMascara += "0"
    return novaMascara

ip1 = list(map(int, input().split(".")))
ip2 = list(map(int, input().split(".")))
mascara = int(input())

transfBin(ip1)
transfBin(ip2)
mascara_bin = transfMascara(mascara)

ip_int1 = int("".join(ip1), 2)
ip_int2 = int("".join(ip2), 2)

mascara_int = int(mascara_bin, 2) #converte a string para um inteiro binario, ja convertendo 

rede1 = ip_int1 & mascara_int
rede_bin = bin(rede1)[2:].zfill(32)

rede2 = ip_int2 & mascara_int
rede_bin2 = bin(rede2)[2:].zfill(32)

if rede_bin == rede_bin2:
    print("Pertencem")
else:
    print("Não pertencem")

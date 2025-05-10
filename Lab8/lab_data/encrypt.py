def encrypt_password(input_str: str) -> str:
    data = bytearray(input_str.encode('utf-8'))

    data[0] ^= 0xAB

    for i in range(1, len(data)):
        data[i] = (data[i] - i) & 0xFF
        data[i] ^= data[i - 1]
        data[i] = (data[i] + data[i - 1]) & 0xFF
        data[i] ^= data[i - 1]
        data[i] ^= data[8] if len(data) > 8 else 0
        if data[i] == 0:
            data[i] = 1

    return ''.join(f"{byte:02x}" for byte in data)


if __name__ == "__main__":
    plaintext = "THEPASSWORDISEASYTOCRACK"
    encrypted = encrypt_password(plaintext)
    print(f"Encrypted result: {encrypted}")

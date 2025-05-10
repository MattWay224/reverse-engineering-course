import time
import random


def simulate_guessing(seed):
	random.seed(seed)
	score = 0
	for _ in range(1337):
		r = random.randint(0, 2 ** 31 - 1)
		guess = r % 2
		if guess == r % 2:
			score += 1
	return score


def decrypt_flag(enc_str, xor_key):
	return ''.join(chr(ord(c) ^ xor_key) for c in enc_str)


if __name__ == "__main__":
	encrypted = "kaljv44o<kk5k<<:5<89<k:k54k4oi9<n9l<:p"

	now = int(time.time())
	for delta in range(0, 10):
		test_seed = now - delta
		score = simulate_guessing(test_seed)
		if score == 1337:
			print(f"Found correct seed: {test_seed}")
			decrypted = decrypt_flag(encrypted, 13)
			print(f"Decrypted flag: {decrypted}")
			break
	else:
		print("Could not find correct seed.")

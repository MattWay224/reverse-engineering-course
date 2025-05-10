#!/bin/bash
ITERATIONS=1000

echo "Запускаем fuzzing $ITERATIONS итераций..."

for i in $(seq 1 $ITERATIONS); do
    radamsa test.json > fuzz_input.json

    ./json_parser fuzz_input.json

    EXIT_CODE=$?
    if [ $EXIT_CODE -ne 0 ]; then
        echo "❗ Итерация $i: бинарник вернул код $EXIT_CODE"
        echo "Сохраняем провалившийся ввод в crash_$i.json"
        cp fuzz_input.json crash_$i.json
    fi
done

echo "Fuzzing завершен"

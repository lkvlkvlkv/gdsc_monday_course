#!/bin/bash

# 設定測試資料夾和程式執行檔路徑
testcase_count=10
testcase_folder="./testcase"
executable="./solve"

# 初始化總運行時間變數
total_execution_time=0

# 迭代測試資料01~20
for ((i=0; i<=testcase_count; i++)); do
  input_file="$testcase_folder/$(printf "%d" $i).in"
  expected_output_file="$testcase_folder/$(printf "%d" $i).out"
  output_file="./$(printf "%d" $i).out"

  # 執行程式並計算執行時間
  execution_time=$(TIMEFORMAT="%R"; time ($executable < $input_file > $output_file) 2>&1 >/dev/null)

  # 累加總運行時間
  total_execution_time=$(echo "$total_execution_time + $execution_time" | bc)

  # 顯示三位小數
  execution_time=$(printf "%.3f" $execution_time)

  if [ ! -f "$expected_output_file" ]; then
    echo "Expected output file not found: $expected_output_file, (Execution Time: $execution_time seconds)"
  elif diff -q $output_file $expected_output_file >/dev/null; then
    echo "Test Case $i: Passed (Execution Time: $execution_time seconds)"
  else
    echo "Test Case $i: Failed (Execution Time: $execution_time seconds)"
  fi

  # 刪除暫存的輸出檔案
  rm $output_file
done

# 顯示三位小數
total_execution_time=$(printf "%.3f" $total_execution_time)

# 輸出總運行時間
echo "Total Execution Time: $total_execution_time seconds"

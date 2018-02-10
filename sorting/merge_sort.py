import sys

sys.setrecursionlimit(100000)


def merge_sort(list_of_values):
    if len(list_of_values) <= 1:
        return list_of_values
    mid = len(list_of_values) // 2
    left_half = merge_sort(list_of_values[:mid])
    right_half = merge_sort(list_of_values[mid:])
    return merge(left_half, right_half)


def merge(left_half, right_half):
    result = []

    while len(left_half) > 0 and len(right_half) > 0:
        if left_half[0] <= right_half[0]:
            result.append(left_half[0])
            left_half = left_half[1:]
        else:
            result.append(right_half[0])
            right_half = right_half[1:]

    if len(left_half) > 0:
        result += left_half
    if len(right_half) > 0:
        result += right_half

    return result


def main():
    list_of_values = []
    for n in range(int(input("n: "))):
        list_of_values.append(int(input("list of value: ")))
    sorted_list = merge_sort(list_of_values)
    print (sorted_list)


if __name__ == "__main__":
    main()

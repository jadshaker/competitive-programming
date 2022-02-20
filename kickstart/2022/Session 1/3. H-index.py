import heapq


def h_index(N: int, citations: list) -> int:
    min_h = []
    ans = []
    hindex = 0
    for i in range(N):
        if citations[i] > hindex:
            heapq.heappush(min_h, citations[i])
        while min_h and min_h[0] <= hindex:
            heapq.heappop(min_h)
        if len(min_h) > hindex:
            hindex += 1
        ans.append(hindex)
    return ans


if __name__ == '__main__':
    t = int(input())
    for test_case in range(1, t + 1):
        n = int(input())
        citations = list(map(int, input().split()))
        h_index_scores = h_index(n, citations)
        print(
            "Case #" + str(test_case) + ": " +
            ' '.join(map(str, h_index_scores))
        )

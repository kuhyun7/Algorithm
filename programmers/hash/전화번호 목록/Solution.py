def solution(phone_book):
    minSize = 20;
    phone_book.sort()
    lenarr = {};

    temp =[];
    for i in range(0, len(phone_book)):
        strlen = len(phone_book[i]) -1
        if (minSize>strlen):
            minSize = strlen;
                     
        for j in range(strlen, minSize, -1):
            if (phone_book[i][0:j] in lenarr):
                return False
        lenarr[phone_book[i]] = 0;

    return True;
def decTobin(dec_in):
    bin_out = []
    i = 0;
    # print dec_in
    if dec_in == 0:
        bin_out.append(0)
    while dec_in != 0:
        if dec_in % 2 == 0:
            bin_out.append(0)
            dec_in = dec_in/2
            # i+=1

        elif dec_in % 2 != 0:
            bin_out.append(1)
            dec_in = (dec_in - 1)/2
            # i+=1
    bin_out.reverse()
    return bin_out
    # for j in bin_out:
    #     print j


def main():
    print decTobin(1)
if __name__ == "__main__":
    main()

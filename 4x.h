const char* genome = "ATGGGCGGCGCATGAGAGAAGCCCAAACCAATAACTACCCAAAATGGAGAAAGTTCACGTTGACATCGAGGAAGATAGTCCCTTCCTCAGAGCATTACAACGGAGCTTCCCGCAGTTTGAGGTAGAAGCCAAGCAGGTCACAGATAATGACCATGCTAACGCCAGAGCGTTTTCGCATTTGGCATCGAAATTGATCGAGACGGAGGTGGAACCATCCGATACGATCCTAGACATTGGAAGTGCGCCTGCCCGCAGAATGTATTCCAAGCATAAGTACCATTGCATCTGTCCGATGAAATGTGCAGAAGATCCGGACAGACTGTTTAAGTATGCAGCCAAGCTGAAGAAGAACTGTAAAGAGATTACAGATAAGGAACTGGACAAGAAGATGAAGGAGCTTGCGGAAGTCATGAGCGACCCTGATCTCGAAACTGAAACGATTTGCCTTCACGACGATGAAACCTGTCGATTTGAGGGTCAAGTCGCAGTGTATCAGGATGTGTACGCGGTTGACGGACCGACGAGCCTTTACCATCAGGCCAACAAAGGGGTCAGAGTCGCCTATTGGATAGGATTCGACACTACCCCTTTTATGTTTAAGAACCTGGCTGGAGCATATCCCTCCTATTCGACCAACTGGGCCGACGAGACCGTGTTAACGGCTCGTAATATAGGCTTGTGCAGCTCCGATGTGATGGAGCGGTCACGTAGAGGGATGTCCATCCTCAGAAAGAAATTTTTAAAACCATCCAATAACGTCTTGTTCTCTGTAGGATCTACCATCTACCACGAGAAGCGAGACTTACTAAGGAGTTGGCACCTACCGTCCGTTTTTCACCTACGTGGTAAGCAGAATTACACTTGTCGGTGTGAGACTATAGTTAGTTGCGACGGGTACGTCGTCAAAAGGATAGCTATTAGTCCAGGTCTGTACGGGAAACCGTCGGGCTACGCTGCCACGATGCATCGCGAGGGATTCTTGTGCTGCAAGGTGACGGACACGCTTGACGGGGAGAGGGTCTCTTTCCCCGTATGCACGTACGTGCCAGCCACATTGTGCGACCAAATGACAGGCATTCTGGCAACAGATGTCAGTGCAGACGACGCGCAGAAATTGCTGGTTGGGCTCAACCAGCGAATAGTCGTAAATGGCCGCACTCAAAGGAATACTAACACAATGAAGAACTATTTATTACCCGTCGTGGCACAAGCATTTGCCAGATGGGCTAAAGAGTACAAAGAAGATCAAGAAGATGAAAGACCATTGGGGCTTAGGGACCGCCAGTTGGTAATGGGGTGTTGTTGGGCGTTCAGGAAACACAAGATAACATCAGTGTACAAACGACCAGACACCCAAACGATCATCAAGGTAAACAGCGATTTCCACTCTTTCGTGCTGCCCAGAATTGGAAGCAACACCTTGGAGATTGGGCTGAGGACCAGGATCAGAAAACTACTGGAGGAACCTGTGGACAGACCACCACTGATTACCGCCGACGACATACAGGAAGCCAAGAACGCGGCGGATGAGGCTAAGGAAGTCAAGGAGGCCGAAGAGCTCAGGGCAGCATTACCACCGCTGTCTGCCGATGTAGAGGAACCTGCACTGGAGGCGGACGTTGACTTAATGCTGCAGGAGGCGGGAGCAGGATCTGTCGAAACCCCCAGGGGGCTCATCAAAGTCACCAGTTATGCAGGAGAAGACAAAATTGGCTCTTATGCGGTGCTCTCCCCACAAGCAGTACTGCGAAGTGAAAAACTGACGTGCATCCACCCGCTTGCAGAGCAAGTAATTGTAATCACACACTCTGGAAGGAAGGGTAGATACGCAGTTGAGCCTTACCACGGAAAAGTGGTAGTACCCGAAGGGCAAGCTATACCTGTCCAAGACTTCCAAGCACTCAGTGAGAGCGCCACAATTGTGTACAACGAACGTGAGTTCGTGAATAGGTATTTACACCACATTGCCACGCACGGTGGAGCTCTGAACACAGACGAGGAGTATTACAGAGTGGTGAAACCTAGTGAACATGAAGGTGAGTACTTATATGACATTGACAAGAAACAATGTGTGAAGAAAGAACTGGTTACGGGACTAGGTTTGACAGGAGAACTTGTCGATCCCCCCTTCCATGAATTTGCATATGAAAGCTTGAGGACACGTCCGGCCGCACCTTATCAAGTACCAACTATAGGTGTGTATGGCGTTCCCGGGTCCGGGAAGTCTGGAATTATTAAGAGCGCAGTCACAAAGAAGGACTTGGTAGTGAGTGCTAAGAAGGAGAACTGCGCCGAGATAATAAGGGACGTCAAGAAGATGAAAGGGCTAGACGTCAATGCCCGGACGGTGGACTCAGTGCTGTTAAATGGATGCAAGCACCCGGTCGAGACTTTGTACATTGATGAAGCCTTTGCATGCCACGCCGGCACTCTCAGGGCCTTAATAGCCATTATACGCCCAAAGAAAGCAGTGCTATGTGGTGACCCAAAGCAATGTGGCTTCTTCAACATGATGTGCCTGAAAGTGCACTTCAACCATGAAATATGCACTCAAGTTTTCCACAAAAGCATATCTCGCAGGTGTACCAAGTCAGTGACGTCGGTAGTGTCCACACTGTTTTATGACAAAAGAATGAGAACTACTAACCCAAGGGATTCCAAAATCGAAATTGACACAACAGGAAGTACTAAACCAAAAAAGGATGACTTGATTCTCACATGTTTTAGGGGATGGGTTAAGCAACTGCAAATAGACTACAAAGGAAATGAAATAATGACCGCGGCTGCCTCACAGGGATTGACGCGGAAAGGTGTCTATGCAGTTAGGTACAAAGTTAACGAGAACCCATTGTACGCACCCACCTCAGAGCATGTAAATGTGCTGTTGACCCGGACGGAAGACAAGATTGTGTGGAAGACTCTTGCAGGGGACCCGTGGATAAAGACCCTGACCGCGAAGTACCCCGGAGATTTCACTGCAACAATGGAAGAATGGCAGGCAGAACATGATGCCATCATGAGACACATCCTGGAGAAACCGGATCCCACGGATGTCTTCCAAAATAAAGCTAATGTTTGCTGGGCAAAGGCACTTGTACCTGTGCTTAAGACAGCCGGGATAGATTTGACCACAGAGCAGTGGAACACAGTGGATTACTTCAAAGAGGATAAGGCCCACTCAGCTGAGATTGTCCTGAATCAGCTGTGCGTGCGATTCTTCGGTCTAGACTTAGATTCTGGTTTGTTTTCCGCCCCCACAGTTCCACTCTCCATTAGGAACAACCATTGGGACAACTCACCGTCACCCAACATGTACGGGTTGAATCAAGAAGTGGTCAGGCAACTATCACGCAGGTACCCTCAATTACCACGTGCGGTGACTACTGGGAGAGCATACGACATGAACACCGGTACTTTGCGCAATTATGATCCGCGCATAAATTTAGTACCGGTGAACCGTCGTCTACCACATGCTCTCGTGACGCAACATGCTGATCATCCTCCCAGTGATTTTTCCGCCTTTGTCAGTAAGCTTAAAGGCAGAACGGTCCTAGTAGTTGGTGAGAAGATGAGTATTTCAGGTAAGACGGTAGACTGGTTATCTGAAACACCTGATTCTACTTTTAGGGCGCGCCTAGATCTAGGCATACCCAATGAACTACCGAAGTACGATATCGTCTTCGTAAATGTAAGAACACAGTACCGCTACCACCACTACCAGCAGTGTGAGGACCACGCCATTAAGTTGAGCATGTTGACCAAGAAGGCCTGCCTGCACCTGAACCCCGGAGGAACCTGTGTGAGCATTGGTTACGGCTATGCGGACCGGGCCAGTGAAAGCATCATAGGTGCAGTTGCTCGGCAGTTCAAGTTCTCGAGGGTATGCAAACCGAAGGTGTCTAAGGAGGAGACCGAAGTGCTATTTGTCTTCATTGGGTTCGATCGTAAAACGCGAACCCATAACCCATACAAGCTCTCCTCCACCCTGACCAATATTTACACCGGCTCGAGGCTCCATGAAGCTGGCTGCGCACCTTCGTATCATGTAGTGCGCGGGGATATAGCCACTGCCACGGAAGGAGTAATCGTTAATGCTGCCAACAGCAAGGGCCAGCCAGGCAGTGGAGTGTGCGGAGCTCTGTACCGGAAGTACCCCGAAAGCTTCGATTTACAACCAATAGAAGTGGGGAAAGCTAGATTGGTCAAAGGTAACTCAAAACATCTCATTCATGCAGTGGGGCCGAATTTTAACAAAGTGTCTGAAGTGGAAGGTGACAAACAGCTGGCAGAAGCGTATGAATCTATAGCCAGGATTATTAATGACAACAATTATAGATCTGTGGCTATTCCGCTTCTGTCCACTGGAATATTTGCCGGAAACAAGGATAGGTTAATGCAATCCTTAAACCATCTGTTAACGGCATTGGACACAACAGACGCAGATGTGGCCATATACTGCAGAGACAAGAAATGGGAAGTGACGTTGAAAGAGGTCGTAGCCAGGAGAGAGGCGGTAGAGGAGATATGTATCTCCGAAGATTCCTCCGTAGCAGAGCCGGATGCAGAGCTGGTTAGAGTTCACCCTAAGAGCTCTTTGGCTGGAAGGAAAGGTTACAGCACTAGCGATGGGAAGACATTCTCATATCTTGAAGGAACCAAATTTCATCAGGCGGCGAAGGACATGGCAGAAATTAACGCTATGTGGCCTGCCGCTACAGAGGCTAATGAGCAGGTGTGCTTATACATTCTGGGTGAAAGTATGAGCAGTATAAGATCCAAATGCCCCGTTGAGGAGTCAGAGGCATCCACCCCACCAAGTACATTGCCTTGCTTGTGCATCCACGCTATGACCCCGGAACGGGTTCAGCGTTTGAAAGCCTCCCGCCCCGAACAAATTACAGTTTGTTCTTCCTTCCCATTGCCGAAGTACAGAATAACAGGAGTGCAGAAGATTCAATGTTCGCATCCTATACTTTTCTCTCCTAAAGTACCTGAGTACATACACCCTAGAAAGTACCTTGCAGACGCAGCTTCCGCAAACAATGGGGCAGCCGAATCAACATCGGTGGACGTGCAGCCACAGCTGGAAGAGAGTCCTGAGAACACGGAACAACTGGTGGAGGAGGAAGACAGTATAAGCGTGCTGTCTGAGGATACACCACACCAAGTGCACCAAGTGGAGGCTGAAGTGCATCGCTTCAGCGCAAGTGCTCAATCTTCGTCCTGGTCCATTCCACGTGCATCCGACTTTGATGTCGAGAGTCTTTCCGTGCTCGAATCCCTGGGTGCTAATGATACAATCAGCATGGAGTCGTCCTCAAACGAAACAGCTCTTGCTTTGCGGACCATTTTTAAGACTCCACCCATTCCAAGGCCTCGAGTGCAGAGCACATCCACAGACGTGGATAGTATCTCAGCACTCGAGTCTTGTGACAGCACCAGCGATGCGCGTAGCATAGACTCGGATGAAACCGATGTTTCCATCTTTGACAAAAGGTTGGAGTTCCTGGCCAGACCTGTTCCCGCACCGCGAACCAAATTTAGGACTCCACCCGTCCCGAAACCGCGTGCGCGGAGGCCATTACATCCTTTGTCTAGTAGATCAAGCTCGCGCTCTAGCCTGGCGTCTAATCCACCAGGTGTTAACCGAGTGATCACTAGGGAAGAATTTGAGGCCTTCGTTGCCCAACAGCAATGACGGTTCGACGCGGGCGCGTACATTTTCTCCTCGGATACTCGTCAAGGACATTTGCAACAAAAATCAGTAAGGCAGACAGTATTGTCTGAAGTGGTGCTAGAGAGGACTGGATTAGAGATCTCGTACGCCCCGCGCCTCGACCTGAACAAAGAAGAAATACTGAGAAAGAAGTTACAACTGAACCCTACGCAAGCTAACCGGAGTAGATATCAGTCACGGAGGGTTGAAAACATGAAGGCCATAACAACTAAGAGAATCTTACAGGGATTAGGTCACTACCTGAAAACTGAAGGCAAGGTGGAGTGCTATCGTACGTTGCACCCCGTACCTTTGTATTCAGCAAGTGTGAACAGAGCGTTCTCCAGTCCCAAAGTTGCTGTTGAAGCATGTAACGTTGTTCTGAAGGAAAATTTTCCGACAGTGGCGTCGTACTGCATAATACCTGAGTACGACGCCTACTTGGACATGGTGGACGGTGCATCATGTTGCTTGGATACGGCGAGTTTTTGCCCTGCCAAGTTGCGTAGCTTTCCGAAGAAACACGCATACCTCGAGCCCACCATTCGGTCTGCAGTCCCATCAGCAATTCAGAACACGCTGCAAAATGTACTCGCAGCTGCCACAAAGAGAAACTGCAATGTGACTCAAATGAGGGAGCTGCCTGTACTGGATTCTGCGGCCTTCAATGTAGAGTGTTTTAAAAAATACGCTTGCAATAATGAGTATTGGGAGACCTACAAGAAGAATCCTATTAGATTGACCGAGGAAAATGTGGTCAACTATATAACCAAGTTAAAAGGGCCGAAGGCGGCTGCCCTGTATGCAAAGACTCATAATTTAGACATGCTGCAAGACATACCCATGGACAGGTTTATTATGGATTTAAAAAGAGATGTCAAGGTAACTCCAGGAACCAAGCATACCGAAGAAAGGCCTAAGGTCCAAGTAATCCAGGCTGCAGATCCATTGGCTACAGCATACCTATGTGGGATTCATAGAGAATTGGTGCGCAGACTGAACGCAGTTCTGTTGCCCAACATACACACATTATTTGACATGTCTGCTGAGGATTTCGACGCCATAATTGCCGAGCACTTCCAACCAGGCGATTGGGTGTTAGAGACAGACATAGCGTCATTCGATAAAAGCGAAGATGACGCGATGGCTCTGACGGCACTGATGATCCTGGAAGACCTCGGGGTGGACCCAGAGCTGTTGACCCTAATCGAAGCGGCATTTGGCGAAATATCCTCCATTCACTTACCAACCAAAACTAAATTTAGGTTTGGAGCCATGATGAAATCAGGGATGTTCTTGACTCTGTTTGTCAATACTGTGATCAATATGGTCATAGCTAGCAGAGTTCTGCGTGAGAGACTGACAAACTCCCCTTGCGCCGCGTTCATTGGCGACGACAATATCGTGAAAGGGGTTAAGTCCGACAAACTCATGGCCGATAGGTACGCTACATGGTTGAACATGGAAGTCAAAATCATCGACGCAGTGGTTGGCGAGAAAGCTCCCTACTTCTGTGGTGGGTTTATTTTATGTGACTCTGTGACCGGAACTGCATGCCGTGTAGCAGACCCTTTGAAGAGATTATTTAAGCTTGGAAAACCACTGGCTGTGGATGATGAACATGATGATGACAGGCGTCGAGCACTACAGGAGGAATCTGCCCGGTGGAACCGGGTGGGAATTTTTTCCGAGCTGTGCAAAGCCGTCGAGTCGCGATATGAAACAGTGGGCACGGCTGTCATTATCATGGCCATGACTACGCTCGCCAGCAGTGTCGAGTCGTTCAGTTGTCTAAGAGGGGCTTCTATATCCCTCTACGGCTAACCTGAATGGACTGCGACGTAGTCAAGTCCGCCGAAATGTTTCCTTATCAACCAATGTACCCAATGCAGCCCATGCCCTTCCGCAACCCTTTTGCGACTCCCAGAAGACCATGGTTTCCAAGGACCGACCCCTTTTTAGCGATGCAGGTGCAAGAGCTGGCAAGGTCCATGGCCAACTTGACGTTCAAGCAACGGCGAGATGTGCCGCCCGAGGGTCCACCGGCTAAGAAGAAGAAGAAGGACAACTCGCAACAAGGTGGTCGGAATCAGAATGGAAAGAAAAAGAACAAGCTAGTAAAGAAAAAGAAGAAGACAGGGCCACCACCCCCAAAAAATACTGGTGGCAAAAAGAAAGTCAATAGGAAGCCAGGGAAGAGGCAACGAATGGTTATGAAGTTGGAGTCAGACAAGACATTCCCTATCATGCTAGATGGAAAAGTTAATGGATATGCATGCGTGGTCGGTGGCAAGCTGTTTAGACCACTGCATGTGGAGGGTAAGATTGACAATGACGTGTTGTCCTCCCTCAAGACCAAAAAGGCATCTAAGTATGATCTGGAGTATGCTGATGTGCCGCAGAGCATGCGCGCAGACACATTTAAATACACTCATGAAAAACCCCAGGGCTATTACAGCTGGCACCATGGAGCAGTACAGTATGAAAACGGCAGATTCACAGTGCCCAAAGGAGTCGGAGCCAAAGGAGATAGCGGTCGCCCCATACTTGACAACCAAGGGCGTGTGGTCGCTATTGTGCTTGGCGGAGTGAATGAAGGCTCCAGAACGGCACTGTCTGTCGTGACGTGGAACGAAAAAGGGGTTACAGTCAAATACACCCCCGAGAATAGCGAGCAGTGGTCCCTGGTGACCACCATGTGCCTGCTAGCCAATGTCACGTTCCCGTGCACCCAACCACCCATCTGCTACGACCGTAAGCCAGCAGAGACGTTGTCCATGCTCAGTCATAACATAGACAATCCTGGTTATGACGAGTTGCTCGAAGCAGTACTGAAATGTCCAGGCAGAGGCAAGAGGTCCACGGAGGAGCTGTTTAAGGAGTACAAGTTAACACGCCCGTACATGGCCAGGTGCATCAGGTGTGCGGTCGGAAGTTGCCACAGCCCCATAGCCATAGAGGCGGTAAGGAGCGAAGGGCACGATGGCTATGTACGACTCCAGACCTCATCTCAGTATGGATTAGACCCATCAGGAAACTTGAAAGGCAGAACCATGAGGTATGATATGCATGGAACCATAGAAGAGATACCGTTGCATCAGGTGTCTGTTCATACCTCACGTCCTTGCCACATAATAGATGGGCATGGATACTTTCTGCTTGCCAGGTGCCCTGCAGGAGACTCCATAACTATGGAATTTAAGAAAGAATCAGTCACCCATTCCTGCTCTGTGCCCTACGAAGTAAAGTTTAATCCTGCGGGAAGAGAACTGTACACACACCCACCAGAGCACGGAGCTGAACAACCTTGTCACGTGTACGCTCACGACGCACAAAATAGGGGAGCTTACGTGGAAATGCACCTTCCAGGATCCGAAGTGGACAGTACTTTACTGTCCATGAGCGGTAGTTCTGTTCATGTGACTCCACCTGCCGGGCAAAGCGTCCAAGTGGAATGCGAATGTGGTGGCACCAAGATCTCTGAAACCATCAATTCAGCTAAACAATACAGTCAGTGCTCAAAGACATCTCAGTGCAGGGCATACCGTACACAGAATGACAAATGGGTGTACAATTCGGATAAACTGCCTAAAGCATCGGGAGAAACTCTCAAAGGCAAATTGCATGTGCCCTTCGTACTGACCGAAGCGAAATGCACAGTACCATTGGCTCCAGAACCCATTATCACCTTTGGGTTCCGCTCTGTGTCTCTGAAACTTCATCCTAAGAACCCCACCTTCCTAACCACGAGGCAGCTGGATGGAGAACCAGCTTACACCCACGAACTTATAACCCACCCTGTGGTGAGAAATTTCTCGGTTACAGAGAAAGGTTGGGAATTTGTGTGGGGAAACCATCCGCCTCAAAGGTACTGGTCTCAAGAAACTGCACCAGGTAATCCACACGGACTACCACACGAGGTGATCACGCATTACTATCACAGATATCCCATGTCCACCATCCTCGGCTTATCAATCTGTGCGGCGATAGTGACGACATCCATTGCGGCATCCGTATGGCTGTTTTGCAAATCACGGATTTCATGCCTGACCCCCTATCGCTTGACTCCGAATGCCAGCATGCCTCTGTGCTTAGCCGTCTTGTGCTGCGCACGCACAGCCAAAGCCGAAACTACTTGGGAATCCCTAGATCACCTCTGGAACCACAACCAGCAGATGTTCTGGAGTCAGCTGCTAATCCCGCTAGCAGCACTGATAGTTGCTACCCGCTTGCTGAAATGTGTGTGTTGCGTTGTGCCTTTTTTAGTCGTGGCCGGCGCCGTAGGCGCCGGCGCTTACGAGCACGCGACTACGATGCCGAACCAGGTGGGGATCCCGTATAATACCATTGTCAACAGAGCGGGTTATGCACCTCTACCTATTAGCATAGTACCTACTAAAGTGAAGCTGATTCCAACAGTGAATCTTGAGTACATTACATGCCATTACAAGACTGGAATGGATTCACCCGCCATTAAATGCTGCGGCACTCAGGAGTGTTCTCCAACTTACAGGCCGGACGAGCAATGCAAAGTCTTCTCTGGAGTATACCCATTTATGTGGGGAGGGGCGTATTGCTTTTGCGATACGGAGAATACCCAGATAAGCAAGGCGTACGTGACGAAATCGGAAGATTGCGTCACCGATCACGCCCAGGCATACAAAGCACATACAGCCTCAGTCCAAGCCTTCTTAAATATTACAGTTGGAGGACACTCAACGACAGCAGTGGTGTATGTGAATGGAGAGACTCCCGTTAATTTTAATGGAGTGAAGCTGACCGCGGGCCCTCTGTCCACAGCCTGGTCGCCGTTCGACAAGAAGATCGTGCAGTACGCCGGGGAAATTTATAACTATGACTTTCCGGAATATGGAGCCGGCCACGCAGGAGCGTTTGGTGACATCCAGGCTAGGACGGTATCTAGTTCCGATGTATACGCCAACACAAACCTTGTGCTGCAGAGACCCAAAGCCGGAGCGATCCATGTCCCGTACACCCAGGCCCCATCTGGGTATGAACAATGGAAGAAAGATAAACCACCATCCCTCAAGTTCACAGCCCCGTTCGGTTGTGAAATTTACACCAACCCTATCCGTGCTGAAAACTGCGCTGTGGGATCAATTCCGCTAGCTTTTGACATTCCCGATGCTCTGTTTACCAGGGTGTCCGAAACACCGACATTATCTGCTGCCGAGTGCACTCTGAACGAGTGTGTATATTCATCCGACTTTGGCGGGATCGCTACAGTCAAATACTCGGCGAGCAAGTCAGGCAAATGTGCAGTTCATGTACCCTCAGGCACGGCTACATTGAAAGAAGCCGCAGTCGAGTTGGCCGAACAGGGTTCGGCTACTATACATTTTTCGACTGCCAGCATTCATCCGGAGTTTAGACTCCAGATATGCACGTCTTACGTTACGTGCAAAGGGGATTGTCACCCTCCGAAAGATCACATTGTGACGCATCCCCAATACCACGCCCAGTCATTTACAGCTGCGGTATCAAAAACCGCTTGGACGTGGTTAACATCCTTACTGGGAGGGTCAGCTATAATTATAATAATTGGACTTGTGTTAGCCACAGTTGTGGCTATGTATGTGCTGACCAACCAGAAACATAATTAGTATTAGCAGCGATTGGCATGCTGCTTGTAAAGTTTTATTACAAATAACGTGCGGCAATTGGCGAGCCGCTTTAATTAGAATTTTATTTTCTTTTACCATAATTGGATTTTGTTTTTAATATTTCAAAAAAAAAAAAAAAAAAAAAAAAAACAAAAAAA";

char mutant[] = "ATGGGCGGCGCATGAGAGAAGCCCAAACCAATAACTACCCAAAATGGAGAAAGTTCACGTTGACATCGAGGAAGATAGTCCCTTCCTCAGAGCATTACAACGGAGCTTCCCGCAGTTTGAGGTAGAAGCCAAGCAGGTCACAGATAATGACCATGCTAACGCCAGAGCGTTTTCGCATTTGGCATCGAAATTGATCGAGACGGAGGTGGAACCATCCGATACGATCCTAGACATTGGAAGTGCGCCTGCCCGCAGAATGTATTCCAAGCATAAGTACCATTGCATCTGTCCGATGAAATGTGCAGAAGATCCGGACAGACTGTTTAAGTATGCAGCCAAGCTGAAGAAGAACTGTAAAGAGATTACAGATAAGGAACTGGACAAGAAGATGAAGGAGCTTGCGGAAGTCATGAGCGACCCTGATCTCGAAACTGAAACGATTTGCCTTCACGACGATGAAACCTGTCGATTTGAGGGTCAAGTCGCAGTGTATCAGGATGTGTACGCGGTTGACGGACCGACGAGCCTTTACCATCAGGCCAACAAAGGGGTCAGAGTCGCCTATTGGATAGGATTCGACACTACCCCTTTTATGTTTAAGAACCTGGCTGGAGCATATCCCTCCTATTCGACCAACTGGGCCGACGAGACCGTGTTAACGGCTCGTAATATAGGCTTGTGCAGCTCCGATGTGATGGAGCGGTCACGTAGAGGGATGTCCATCCTCAGAAAGAAATTTTTAAAACCATCCAATAACGTCTTGTTCTCTGTAGGATCTACCATCTACCACGAGAAGCGAGACTTACTAAGGAGTTGGCACCTACCGTCCGTTTTTCACCTACGTGGTAAGCAGAATTACACTTGTCGGTGTGAGACTATAGTTAGTTGCGACGGGTACGTCGTCAAAAGGATAGCTATTAGTCCAGGTCTGTACGGGAAACCGTCGGGCTACGCTGCCACGATGCATCGCGAGGGATTCTTGTGCTGCAAGGTGACGGACACGCTTGACGGGGAGAGGGTCTCTTTCCCCGTATGCACGTACGTGCCAGCCACATTGTGCGACCAAATGACAGGCATTCTGGCAACAGATGTCAGTGCAGACGACGCGCAGAAATTGCTGGTTGGGCTCAACCAGCGAATAGTCGTAAATGGCCGCACTCAAAGGAATACTAACACAATGAAGAACTATTTATTACCCGTCGTGGCACAAGCATTTGCCAGATGGGCTAAAGAGTACAAAGAAGATCAAGAAGATGAAAGACCATTGGGGCTTAGGGACCGCCAGTTGGTAATGGGGTGTTGTTGGGCGTTCAGGAAACACAAGATAACATCAGTGTACAAACGACCAGACACCCAAACGATCATCAAGGTAAACAGCGATTTCCACTCTTTCGTGCTGCCCAGAATTGGAAGCAACACCTTGGAGATTGGGCTGAGGACCAGGATCAGAAAACTACTGGAGGAACCTGTGGACAGACCACCACTGATTACCGCCGACGACATACAGGAAGCCAAGAACGCGGCGGATGAGGCTAAGGAAGTCAAGGAGGCCGAAGAGCTCAGGGCAGCATTACCACCGCTGTCTGCCGATGTAGAGGAACCTGCACTGGAGGCGGACGTTGACTTAATGCTGCAGGAGGCGGGAGCAGGATCTGTCGAAACCCCCAGGGGGCTCATCAAAGTCACCAGTTATGCAGGAGAAGACAAAATTGGCTCTTATGCGGTGCTCTCCCCACAAGCAGTACTGCGAAGTGAAAAACTGACGTGCATCCACCCGCTTGCAGAGCAAGTAATTGTAATCACACACTCTGGAAGGAAGGGTAGATACGCAGTTGAGCCTTACCACGGAAAAGTGGTAGTACCCGAAGGGCAAGCTATACCTGTCCAAGACTTCCAAGCACTCAGTGAGAGCGCCACAATTGTGTACAACGAACGTGAGTTCGTGAATAGGTATTTACACCACATTGCCACGCACGGTGGAGCTCTGAACACAGACGAGGAGTATTACAGAGTGGTGAAACCTAGTGAACATGAAGGTGAGTACTTATATGACATTGACAAGAAACAATGTGTGAAGAAAGAACTGGTTACGGGACTAGGTTTGACAGGAGAACTTGTCGATCCCCCCTTCCATGAATTTGCATATGAAAGCTTGAGGACACGTCCGGCCGCACCTTATCAAGTACCAACTATAGGTGTGTATGGCGTTCCCGGGTCCGGGAAGTCTGGAATTATTAAGAGCGCAGTCACAAAGAAGGACTTGGTAGTGAGTGCTAAGAAGGAGAACTGCGCCGAGATAATAAGGGACGTCAAGAAGATGAAAGGGCTAGACGTCAATGCCCGGACGGTGGACTCAGTGCTGTTAAATGGATGCAAGCACCCGGTCGAGACTTTGTACATTGATGAAGCCTTTGCATGCCACGCCGGCACTCTCAGGGCCTTAATAGCCATTATACGCCCAAAGAAAGCAGTGCTATGTGGTGACCCAAAGCAATGTGGCTTCTTCAACATGATGTGCCTGAAAGTGCACTTCAACCATGAAATATGCACTCAAGTTTTCCACAAAAGCATATCTCGCAGGTGTACCAAGTCAGTGACGTCGGTAGTGTCCACACTGTTTTATGACAAAAGAATGAGAACTACTAACCCAAGGGATTCCAAAATCGAAATTGACACAACAGGAAGTACTAAACCAAAAAAGGATGACTTGATTCTCACATGTTTTAGGGGATGGGTTAAGCAACTGCAAATAGACTACAAAGGAAATGAAATAATGACCGCGGCTGCCTCACAGGGATTGACGCGGAAAGGTGTCTATGCAGTTAGGTACAAAGTTAACGAGAACCCATTGTACGCACCCACCTCAGAGCATGTAAATGTGCTGTTGACCCGGACGGAAGACAAGATTGTGTGGAAGACTCTTGCAGGGGACCCGTGGATAAAGACCCTGACCGCGAAGTACCCCGGAGATTTCACTGCAACAATGGAAGAATGGCAGGCAGAACATGATGCCATCATGAGACACATCCTGGAGAAACCGGATCCCACGGATGTCTTCCAAAATAAAGCTAATGTTTGCTGGGCAAAGGCACTTGTACCTGTGCTTAAGACAGCCGGGATAGATTTGACCACAGAGCAGTGGAACACAGTGGATTACTTCAAAGAGGATAAGGCCCACTCAGCTGAGATTGTCCTGAATCAGCTGTGCGTGCGATTCTTCGGTCTAGACTTAGATTCTGGTTTGTTTTCCGCCCCCACAGTTCCACTCTCCATTAGGAACAACCATTGGGACAACTCACCGTCACCCAACATGTACGGGTTGAATCAAGAAGTGGTCAGGCAACTATCACGCAGGTACCCTCAATTACCACGTGCGGTGACTACTGGGAGAGCATACGACATGAACACCGGTACTTTGCGCAATTATGATCCGCGCATAAATTTAGTACCGGTGAACCGTCGTCTACCACATGCTCTCGTGACGCAACATGCTGATCATCCTCCCAGTGATTTTTCCGCCTTTGTCAGTAAGCTTAAAGGCAGAACGGTCCTAGTAGTTGGTGAGAAGATGAGTATTTCAGGTAAGACGGTAGACTGGTTATCTGAAACACCTGATTCTACTTTTAGGGCGCGCCTAGATCTAGGCATACCCAATGAACTACCGAAGTACGATATCGTCTTCGTAAATGTAAGAACACAGTACCGCTACCACCACTACCAGCAGTGTGAGGACCACGCCATTAAGTTGAGCATGTTGACCAAGAAGGCCTGCCTGCACCTGAACCCCGGAGGAACCTGTGTGAGCATTGGTTACGGCTATGCGGACCGGGCCAGTGAAAGCATCATAGGTGCAGTTGCTCGGCAGTTCAAGTTCTCGAGGGTATGCAAACCGAAGGTGTCTAAGGAGGAGACCGAAGTGCTATTTGTCTTCATTGGGTTCGATCGTAAAACGCGAACCCATAACCCATACAAGCTCTCCTCCACCCTGACCAATATTTACACCGGCTCGAGGCTCCATGAAGCTGGCTGCGCACCTTCGTATCATGTAGTGCGCGGGGATATAGCCACTGCCACGGAAGGAGTAATCGTTAATGCTGCCAACAGCAAGGGCCAGCCAGGCAGTGGAGTGTGCGGAGCTCTGTACCGGAAGTACCCCGAAAGCTTCGATTTACAACCAATAGAAGTGGGGAAAGCTAGATTGGTCAAAGGTAACTCAAAACATCTCATTCATGCAGTGGGGCCGAATTTTAACAAAGTGTCTGAAGTGGAAGGTGACAAACAGCTGGCAGAAGCGTATGAATCTATAGCCAGGATTATTAATGACAACAATTATAGATCTGTGGCTATTCCGCTTCTGTCCACTGGAATATTTGCCGGAAACAAGGATAGGTTAATGCAATCCTTAAACCATCTGTTAACGGCATTGGACACAACAGACGCAGATGTGGCCATATACTGCAGAGACAAGAAATGGGAAGTGACGTTGAAAGAGGTCGTAGCCAGGAGAGAGGCGGTAGAGGAGATATGTATCTCCGAAGATTCCTCCGTAGCAGAGCCGGATGCAGAGCTGGTTAGAGTTCACCCTAAGAGCTCTTTGGCTGGAAGGAAAGGTTACAGCACTAGCGATGGGAAGACATTCTCATATCTTGAAGGAACCAAATTTCATCAGGCGGCGAAGGACATGGCAGAAATTAACGCTATGTGGCCTGCCGCTACAGAGGCTAATGAGCAGGTGTGCTTATACATTCTGGGTGAAAGTATGAGCAGTATAAGATCCAAATGCCCCGTTGAGGAGTCAGAGGCATCCACCCCACCAAGTACATTGCCTTGCTTGTGCATCCACGCTATGACCCCGGAACGGGTTCAGCGTTTGAAAGCCTCCCGCCCCGAACAAATTACAGTTTGTTCTTCCTTCCCATTGCCGAAGTACAGAATAACAGGAGTGCAGAAGATTCAATGTTCGCATCCTATACTTTTCTCTCCTAAAGTACCTGAGTACATACACCCTAGAAAGTACCTTGCAGACGCAGCTTCCGCAAACAATGGGGCAGCCGAATCAACATCGGTGGACGTGCAGCCACAGCTGGAAGAGAGTCCTGAGAACACGGAACAACTGGTGGAGGAGGAAGACAGTATAAGCGTGCTGTCTGAGGATACACCACACCAAGTGCACCAAGTGGAGGCTGAAGTGCATCGCTTCAGCGCAAGTGCTCAATCTTCGTCCTGGTCCATTCCACGTGCATCCGACTTTGATGTCGAGAGTCTTTCCGTGCTCGAATCCCTGGGTGCTAATGATACAATCAGCATGGAGTCGTCCTCAAACGAAACAGCTCTTGCTTTGCGGACCATTTTTAAGACTCCACCCATTCCAAGGCCTCGAGTGCAGAGCACATCCACAGACGTGGATAGTATCTCAGCACTCGAGTCTTGTGACAGCACCAGCGATGCGCGTAGCATAGACTCGGATGAAACCGATGTTTCCATCTTTGACAAAAGGTTGGAGTTCCTGGCCAGACCTGTTCCCGCACCGCGAACCAAATTTAGGACTCCACCCGTCCCGAAACCGCGTGCGCGGAGGCCATTACATCCTTTGTCTAGTAGATCAAGCTCGCGCTCTAGCCTGGCGTCTAATCCACCAGGTGTTAACCGAGTGATCACTAGGGAAGAATTTGAGGCCTTCGTTGCCCAACAGCAATGACGGTTCGACGCGGGCGCGTACATTTTCTCCTCGGATACTCGTCAAGGACATTTGCAACAAAAATCAGTAAGGCAGACAGTATTGTCTGAAGTGGTGCTAGAGAGGACTGGATTAGAGATCTCGTACGCCCCGCGCCTCGACCTGAACAAAGAAGAAATACTGAGAAAGAAGTTACAACTGAACCCTACGCAAGCTAACCGGAGTAGATATCAGTCACGGAGGGTTGAAAACATGAAGGCCATAACAACTAAGAGAATCTTACAGGGATTAGGTCACTACCTGAAAACTGAAGGCAAGGTGGAGTGCTATCGTACGTTGCACCCCGTACCTTTGTATTCAGCAAGTGTGAACAGAGCGTTCTCCAGTCCCAAAGTTGCTGTTGAAGCATGTAACGTTGTTCTGAAGGAAAATTTTCCGACAGTGGCGTCGTACTGCATAATACCTGAGTACGACGCCTACTTGGACATGGTGGACGGTGCATCATGTTGCTTGGATACGGCGAGTTTTTGCCCTGCCAAGTTGCGTAGCTTTCCGAAGAAACACGCATACCTCGAGCCCACCATTCGGTCTGCAGTCCCATCAGCAATTCAGAACACGCTGCAAAATGTACTCGCAGCTGCCACAAAGAGAAACTGCAATGTGACTCAAATGAGGGAGCTGCCTGTACTGGATTCTGCGGCCTTCAATGTAGAGTGTTTTAAAAAATACGCTTGCAATAATGAGTATTGGGAGACCTACAAGAAGAATCCTATTAGATTGACCGAGGAAAATGTGGTCAACTATATAACCAAGTTAAAAGGGCCGAAGGCGGCTGCCCTGTATGCAAAGACTCATAATTTAGACATGCTGCAAGACATACCCATGGACAGGTTTATTATGGATTTAAAAAGAGATGTCAAGGTAACTCCAGGAACCAAGCATACCGAAGAAAGGCCTAAGGTCCAAGTAATCCAGGCTGCAGATCCATTGGCTACAGCATACCTATGTGGGATTCATAGAGAATTGGTGCGCAGACTGAACGCAGTTCTGTTGCCCAACATACACACATTATTTGACATGTCTGCTGAGGATTTCGACGCCATAATTGCCGAGCACTTCCAACCAGGCGATTGGGTGTTAGAGACAGACATAGCGTCATTCGATAAAAGCGAAGATGACGCGATGGCTCTGACGGCACTGATGATCCTGGAAGACCTCGGGGTGGACCCAGAGCTGTTGACCCTAATCGAAGCGGCATTTGGCGAAATATCCTCCATTCACTTACCAACCAAAACTAAATTTAGGTTTGGAGCCATGATGAAATCAGGGATGTTCTTGACTCTGTTTGTCAATACTGTGATCAATATGGTCATAGCTAGCAGAGTTCTGCGTGAGAGACTGACAAACTCCCCTTGCGCCGCGTTCATTGGCGACGACAATATCGTGAAAGGGGTTAAGTCCGACAAACTCATGGCCGATAGGTACGCTACATGGTTGAACATGGAAGTCAAAATCATCGACGCAGTGGTTGGCGAGAAAGCTCCCTACTTCTGTGGTGGGTTTATTTTATGTGACTCTGTGACCGGAACTGCATGCCGTGTAGCAGACCCTTTGAAGAGATTATTTAAGCTTGGAAAACCACTGGCTGTGGATGATGAACATGATGATGACAGGCGTCGAGCACTACAGGAGGAATCTGCCCGGTGGAACCGGGTGGGAATTTTTTCCGAGCTGTGCAAAGCCGTCGAGTCGCGATATGAAACAGTGGGCACGGCTGTCATTATCATGGCCATGACTACGCTCGCCAGCAGTGTCGAGTCGTTCAGTTGTCTAAGAGGGGCTTCTATATCCCTCTACGGCTAACCTGAATGGACTGCGACGTAGTCAAGTCCGCCGAAATGTTTCCTTATCAACCAATGTACCCAATGCAGCCCATGCCCTTCCGCAACCCTTTTGCGACTCCCAGAAGACCATGGTTTCCAAGGACCGACCCCTTTTTAGCGATGCAGGTGCAAGAGCTGGCAAGGTCCATGGCCAACTTGACGTTCAAGCAACGGCGAGATGTGCCGCCCGAGGGTCCACCGGCTAAGAAGAAGAAGAAGGACAACTCGCAACAAGGTGGTCGGAATCAGAATGGAAAGAAAAAGAACAAGCTAGTAAAGAAAAAGAAGAAGACAGGGCCACCACCCCCAAAAAATACTGGTGGCAAAAAGAAAGTCAATAGGAAGCCAGGGAAGAGGCAACGAATGGTTATGAAGTTGGAGTCAGACAAGACATTCCCTATCATGCTAGATGGAAAAGTTAATGGATATGCATGCGTGGTCGGTGGCAAGCTGTTTAGACCACTGCATGTGGAGGGTAAGATTGACAATGACGTGTTGTCCTCCCTCAAGACCAAAAAGGCATCTAAGTATGATCTGGAGTATGCTGATGTGCCGCAGAGCATGCGCGCAGACACATTTAAATACACTCATGAAAAACCCCAGGGCTATTACAGCTGGCACCATGGAGCAGTACAGTATGAAAACGGCAGATTCACAGTGCCCAAAGGAGTCGGAGCCAAAGGAGATAGCGGTCGCCCCATACTTGACAACCAAGGGCGTGTGGTCGCTATTGTGCTTGGCGGAGTGAATGAAGGCTCCAGAACGGCACTGTCTGTCGTGACGTGGAACGAAAAAGGGGTTACAGTCAAATACACCCCCGAGAATAGCGAGCAGTGGTCCCTGGTGACCACCATGTGCCTGCTAGCCAATGTCACGTTCCCGTGCACCCAACCACCCATCTGCTACGACCGTAAGCCAGCAGAGACGTTGTCCATGCTCAGTCATAACATAGACAATCCTGGTTATGACGAGTTGCTCGAAGCAGTACTGAAATGTCCAGGCAGAGGCAAGAGGTCCACGGAGGAGCTGTTTAAGGAGTACAAGTTAACACGCCCGTACATGGCCAGGTGCATCAGGTGTGCGGTCGGAAGTTGCCACAGCCCCATAGCCATAGAGGCGGTAAGGAGCGAAGGGCACGATGGCTATGTACGACTCCAGACCTCATCTCAGTATGGATTAGACCCATCAGGAAACTTGAAAGGCAGAACCATGAGGTATGATATGCATGGAACCATAGAAGAGATACCGTTGCATCAGGTGTCTGTTCATACCTCACGTCCTTGCCACATAATAGATGGGCATGGATACTTTCTGCTTGCCAGGTGCCCTGCAGGAGACTCCATAACTATGGAATTTAAGAAAGAATCAGTCACCCATTCCTGCTCTGTGCCCTACGAAGTAAAGTTTAATCCTGCGGGAAGAGAACTGTACACACACCCACCAGAGCACGGAGCTGAACAACCTTGTCACGTGTACGCTCACGACGCACAAAATAGGGGAGCTTACGTGGAAATGCACCTTCCAGGATCCGAAGTGGACAGTACTTTACTGTCCATGAGCGGTAGTTCTGTTCATGTGACTCCACCTGCCGGGCAAAGCGTCCAAGTGGAATGCGAATGTGGTGGCACCAAGATCTCTGAAACCATCAATTCAGCTAAACAATACAGTCAGTGCTCAAAGACATCTCAGTGCAGGGCATACCGTACACAGAATGACAAATGGGTGTACAATTCGGATAAACTGCCTAAAGCATCGGGAGAAACTCTCAAAGGCAAATTGCATGTGCCCTTCGTACTGACCGAAGCGAAATGCACAGTACCATTGGCTCCAGAACCCATTATCACCTTTGGGTTCCGCTCTGTGTCTCTGAAACTTCATCCTAAGAACCCCACCTTCCTAACCACGAGGCAGCTGGATGGAGAACCAGCTTACACCCACGAACTTATAACCCACCCTGTGGTGAGAAATTTCTCGGTTACAGAGAAAGGTTGGGAATTTGTGTGGGGAAACCATCCGCCTCAAAGGTACTGGTCTCAAGAAACTGCACCAGGTAATCCACACGGACTACCACACGAGGTGATCACGCATTACTATCACAGATATCCCATGTCCACCATCCTCGGCTTATCAATCTGTGCGGCGATAGTGACGACATCCATTGCGGCATCCGTATGGCTGTTTTGCAAATCACGGATTTCATGCCTGACCCCCTATCGCTTGACTCCGAATGCCAGCATGCCTCTGTGCTTAGCCGTCTTGTGCTGCGCACGCACAGCCAAAGCCGAAACTACTTGGGAATCCCTAGATCACCTCTGGAACCACAACCAGCAGATGTTCTGGAGTCAGCTGCTAATCCCGCTAGCAGCACTGATAGTTGCTACCCGCTTGCTGAAATGTGTGTGTTGCGTTGTGCCTTTTTTAGTCGTGGCCGGCGCCGTAGGCGCCGGCGCTTACGAGCACGCGACTACGATGCCGAACCAGGTGGGGATCCCGTATAATACCATTGTCAACAGAGCGGGTTATGCACCTCTACCTATTAGCATAGTACCTACTAAAGTGAAGCTGATTCCAACAGTGAATCTTGAGTACATTACATGCCATTACAAGACTGGAATGGATTCACCCGCCATTAAATGCTGCGGCACTCAGGAGTGTTCTCCAACTTACAGGCCGGACGAGCAATGCAAAGTCTTCTCTGGAGTATACCCATTTATGTGGGGAGGGGCGTATTGCTTTTGCGATACGGAGAATACCCAGATAAGCAAGGCGTACGTGACGAAATCGGAAGATTGCGTCACCGATCACGCCCAGGCATACAAAGCACATACAGCCTCAGTCCAAGCCTTCTTAAATATTACAGTTGGAGGACACTCAACGACAGCAGTGGTGTATGTGAATGGAGAGACTCCCGTTAATTTTAATGGAGTGAAGCTGACCGCGGGCCCTCTGTCCACAGCCTGGTCGCCGTTCGACAAGAAGATCGTGCAGTACGCCGGGGAAATTTATAACTATGACTTTCCGGAATATGGAGCCGGCCACGCAGGAGCGTTTGGTGACATCCAGGCTAGGACGGTATCTAGTTCCGATGTATACGCCAACACAAACCTTGTGCTGCAGAGACCCAAAGCCGGAGCGATCCATGTCCCGTACACCCAGGCCCCATCTGGGTATGAACAATGGAAGAAAGATAAACCACCATCCCTCAAGTTCACAGCCCCGTTCGGTTGTGAAATTTACACCAACCCTATCCGTGCTGAAAACTGCGCTGTGGGATCAATTCCGCTAGCTTTTGACATTCCCGATGCTCTGTTTACCAGGGTGTCCGAAACACCGACATTATCTGCTGCCGAGTGCACTCTGAACGAGTGTGTATATTCATCCGACTTTGGCGGGATCGCTACAGTCAAATACTCGGCGAGCAAGTCAGGCAAATGTGCAGTTCATGTACCCTCAGGCACGGCTACATTGAAAGAAGCCGCAGTCGAGTTGGCCGAACAGGGTTCGGCTACTATACATTTTTCGACTGCCAGCATTCATCCGGAGTTTAGACTCCAGATATGCACGTCTTACGTTACGTGCAAAGGGGATTGTCACCCTCCGAAAGATCACATTGTGACGCATCCCCAATACCACGCCCAGTCATTTACAGCTGCGGTATCAAAAACCGCTTGGACGTGGTTAACATCCTTACTGGGAGGGTCAGCTATAATTATAATAATTGGACTTGTGTTAGCCACAGTTGTGGCTATGTATGTGCTGACCAACCAGAAACATAATTAGTATTAGCAGCGATTGGCATGCTGCTTGTAAAGTTTTATTACAAATAACGTGCGGCAATTGGCGAGCCGCTTTAATTAGAATTTTATTTTCTTTTACCATAATTGGATTTTGTTTTTAATATTTCAAAAAAAAAAAAAAAAAAAAAAAAAACAAAAAAA";
randomArr:
        daddiu  $sp,$sp,-48
        sd      $28,32($sp)
        lui     $28,%hi(%neg(%gp_rel(randomArr)))
        daddu   $28,$28,$25
        sd      $18,16($sp)
        sd      $16,0($sp)
        sd      $31,40($sp)
        sd      $19,24($sp)
        sd      $17,8($sp)
        daddiu  $28,$28,%lo(%neg(%gp_rel(randomArr)))
        move    $16,$5
        blez    $5,.L5
        move    $18,$4

        move    $3,$4
        move    $2,$0
.L6:
        addiu   $2,$2,1
        sw      $2,0($3)
        bne     $16,$2,.L6
        daddiu  $3,$3,4

.L5:
        ld      $25,%call16(time)($28)
        move    $4,$0
        addiu   $17,$16,-1

        ld      $25,%call16(srand)($28)
        sll     $4,$2,0

        blez    $17,.L1
        dsll    $17,$17,2

        daddu   $17,$18,$17
        li      $19,1                 # 0x1
.L7:
        ld      $25,%call16(rand)($28)
        daddiu  $17,$17,-4

        lw      $4,4($17)
        div     $0,$2,$16
        teq     $16,$0,7
        addiu   $16,$16,-1
        mfhi    $2
        dsll    $2,$2,2
        daddu   $2,$18,$2
        lw      $3,0($2)
        sw      $4,0($2)
        bne     $16,$19,.L7
        sw      $3,4($17)

.L1:
        ld      $31,40($sp)
        ld      $28,32($sp)
        ld      $19,24($sp)
        ld      $18,16($sp)
        ld      $17,8($sp)
        ld      $16,0($sp)
        j       $31
        daddiu  $sp,$sp,48

quicksort:
        daddiu  $sp,$sp,-192
        sd      $28,168($sp)
        lui     $28,%hi(%neg(%gp_rel(quicksort)))
        daddu   $28,$28,$25
        slt     $2,$5,$6
        sd      $31,184($sp)
        sd      $fp,176($sp)
        sd      $23,160($sp)
        sd      $22,152($sp)
        sd      $21,144($sp)
        sd      $20,136($sp)
        sd      $19,128($sp)
        sd      $18,120($sp)
        sd      $17,112($sp)
        sd      $16,104($sp)
        daddiu  $28,$28,%lo(%neg(%gp_rel(quicksort)))
        beq     $2,$0,.L11
        sd      $6,88($sp)

        dsll    $2,$6,2
        daddu   $2,$4,$2
        ld      $17,%got_disp(quicksort)($28)
        sd      $2,32($sp)
        move    $21,$4
        ld      $3,32($sp)
.L84:
        addiu   $7,$5,-1
        dsll    $2,$5,2
        lw      $9,0($3)
        move    $3,$7
        move    $8,$3
        move    $6,$5
        daddu   $3,$21,$2
.L14:
        lw      $10,0($3)
        lw      $11,88($sp)
        addiu   $6,$6,1
        slt     $4,$9,$10
        bne     $4,$0,.L13
        slt     $11,$6,$11

        addiu   $8,$8,1
        dsll    $4,$8,2
        daddu   $4,$21,$4
        lw      $12,0($4)
        sw      $10,0($4)
        sw      $12,0($3)
.L13:
        bne     $11,$0,.L14
        daddiu  $3,$3,4

        daddiu  $3,$8,1
        ld      $10,32($sp)
        dsll    $3,$3,2
        daddu   $6,$21,$3
        move    $4,$8
        lw      $9,0($10)
        sd      $8,0($sp)
        lw      $8,0($6)
        slt     $4,$5,$4
        sw      $9,0($6)
        beq     $4,$0,.L22
        sw      $8,0($10)

        daddiu  $3,$3,-4
        daddu   $3,$21,$3
        sd      $3,40($sp)
        move    $20,$21
.L21:
        lw      $9,0($3)
        move    $3,$7
        move    $8,$3
        move    $6,$5
        daddu   $3,$20,$2
.L19:
        lw      $10,0($3)
        lw      $11,0($sp)
        addiu   $6,$6,1
        slt     $4,$9,$10
        bne     $4,$0,.L18
        slt     $11,$6,$11

        addiu   $8,$8,1
        dsll    $4,$8,2
        daddu   $4,$20,$4
        lw      $12,0($4)
        sw      $10,0($4)
        sw      $12,0($3)
.L18:
        bne     $11,$0,.L19
        daddiu  $3,$3,4

        daddiu  $3,$8,1
        ld      $10,40($sp)
        dsll    $3,$3,2
        daddu   $6,$20,$3
        move    $4,$8
        lw      $9,0($10)
        sd      $8,8($sp)
        lw      $8,0($6)
        slt     $4,$5,$4
        sw      $9,0($6)
        beq     $4,$0,.L27
        sw      $8,0($10)

        daddiu  $3,$3,-4
        daddu   $3,$20,$3
        sd      $3,48($sp)
        move    $21,$20
.L26:
        lw      $9,0($3)
        move    $3,$7
        move    $8,$3
        move    $6,$5
        daddu   $3,$21,$2
.L24:
        lw      $10,0($3)
        lw      $11,8($sp)
        addiu   $6,$6,1
        slt     $4,$9,$10
        bne     $4,$0,.L23
        slt     $11,$6,$11

        addiu   $8,$8,1
        dsll    $4,$8,2
        daddu   $4,$21,$4
        lw      $12,0($4)
        sw      $10,0($4)
        sw      $12,0($3)
.L23:
        bne     $11,$0,.L24
        daddiu  $3,$3,4

        daddiu  $3,$8,1
        ld      $10,48($sp)
        dsll    $3,$3,2
        daddu   $6,$21,$3
        move    $4,$8
        lw      $9,0($10)
        sd      $8,16($sp)
        lw      $8,0($6)
        slt     $4,$5,$4
        sw      $9,0($6)
        beq     $4,$0,.L32
        sw      $8,0($10)

        daddiu  $3,$3,-4
        daddu   $3,$21,$3
        sd      $3,56($sp)
        move    $20,$21
.L31:
        lw      $9,0($3)
        move    $fp,$7
        daddu   $3,$20,$2
        move    $6,$5
.L29:
        lw      $8,0($3)
        lw      $10,16($sp)
        addiu   $6,$6,1
        slt     $4,$9,$8
        bne     $4,$0,.L28
        slt     $10,$6,$10

        addiu   $fp,$fp,1
        dsll    $4,$fp,2
        daddu   $4,$20,$4
        lw      $11,0($4)
        sw      $8,0($4)
        sw      $11,0($3)
.L28:
        bne     $10,$0,.L29
        daddiu  $3,$3,4

        daddiu  $3,$fp,1
        ld      $10,56($sp)
        dsll    $3,$3,2
        daddu   $6,$20,$3
        lw      $8,0($6)
        lw      $9,0($10)
        slt     $4,$5,$fp
        sw      $9,0($6)
        beq     $4,$0,.L37
        sw      $8,0($10)

        daddiu  $3,$3,-4
        daddu   $3,$20,$3
        sd      $3,64($sp)
        sd      $fp,24($sp)
.L36:
        lw      $9,0($3)
        move    $23,$7
        daddu   $3,$20,$2
        move    $6,$5
.L34:
        lw      $8,0($3)
        lw      $10,24($sp)
        addiu   $6,$6,1
        slt     $4,$9,$8
        bne     $4,$0,.L33
        slt     $10,$6,$10

        addiu   $23,$23,1
        dsll    $4,$23,2
        daddu   $4,$20,$4
        lw      $11,0($4)
        sw      $8,0($4)
        sw      $11,0($3)
.L33:
        bne     $10,$0,.L34
        daddiu  $3,$3,4

        daddiu  $3,$23,1
        ld      $10,64($sp)
        dsll    $3,$3,2
        daddu   $6,$20,$3
        lw      $8,0($6)
        lw      $9,0($10)
        slt     $4,$5,$23
        sw      $9,0($6)
        beq     $4,$0,.L42
        sw      $8,0($10)

        daddiu  $3,$3,-4
        daddu   $3,$20,$3
        sd      $3,72($sp)
        move    $22,$20
        move    $fp,$7
.L41:
        lw      $8,0($3)
        move    $19,$fp
        daddu   $3,$22,$2
        move    $6,$5
.L39:
        lw      $7,0($3)
        addiu   $6,$6,1
        slt     $4,$8,$7
        bne     $4,$0,.L38
        slt     $9,$6,$23

        addiu   $19,$19,1
        dsll    $4,$19,2
        daddu   $4,$22,$4
        lw      $10,0($4)
        sw      $7,0($4)
        sw      $10,0($3)
.L38:
        bne     $9,$0,.L39
        daddiu  $3,$3,4

        daddiu  $3,$19,1
        ld      $9,72($sp)
        dsll    $3,$3,2
        daddu   $6,$22,$3
        lw      $7,0($6)
        lw      $8,0($9)
        slt     $4,$5,$19
        sw      $8,0($6)
        beq     $4,$0,.L47
        sw      $7,0($9)

        daddiu  $3,$3,-4
        daddu   $3,$22,$3
        move    $21,$fp
        sd      $3,80($sp)
        move    $fp,$22
.L46:
        lw      $9,0($3)
        move    $16,$21
        daddu   $3,$fp,$2
        move    $4,$5
.L44:
        lw      $7,0($3)
        addiu   $4,$4,1
        slt     $6,$9,$7
        bne     $6,$0,.L43
        slt     $8,$4,$19

        addiu   $16,$16,1
        dsll    $6,$16,2
        daddu   $6,$fp,$6
        lw      $10,0($6)
        sw      $7,0($6)
        sw      $10,0($3)
.L43:
        bne     $8,$0,.L44
        daddiu  $3,$3,4

        daddiu  $3,$16,1
        ld      $9,80($sp)
        dsll    $3,$3,2
        daddu   $6,$fp,$3
        lw      $7,0($6)
        lw      $8,0($9)
        slt     $4,$5,$16
        sw      $8,0($6)
        beq     $4,$0,.L52
        sw      $7,0($9)

        daddiu  $3,$3,-4
        daddu   $18,$fp,$3
        move    $20,$21
.L51:
        lw      $9,0($18)
        move    $22,$20
        daddu   $3,$fp,$2
        move    $4,$5
.L49:
        lw      $7,0($3)
        addiu   $4,$4,1
        slt     $6,$9,$7
        bne     $6,$0,.L48
        slt     $8,$4,$16

        addiu   $22,$22,1
        dsll    $6,$22,2
        daddu   $6,$fp,$6
        lw      $10,0($6)
        sw      $7,0($6)
        sw      $10,0($3)
.L48:
        bne     $8,$0,.L49
        daddiu  $3,$3,4

        daddiu  $3,$22,1
        dsll    $3,$3,2
        daddu   $6,$fp,$3
        lw      $7,0($6)
        lw      $8,0($18)
        slt     $4,$5,$22
        sw      $8,0($6)
        beq     $4,$0,.L56
        sw      $7,0($18)

        daddiu  $3,$3,-4
        daddu   $21,$fp,$3
.L55:
        lw      $8,0($21)
        daddu   $2,$fp,$2
        move    $3,$5
.L54:
        lw      $6,0($2)
        addiu   $3,$3,1
        slt     $4,$8,$6
        bne     $4,$0,.L53
        slt     $7,$3,$22

        addiu   $20,$20,1
        dsll    $4,$20,2
        daddu   $4,$fp,$4
        lw      $9,0($4)
        sw      $6,0($4)
        sw      $9,0($2)
.L53:
        bne     $7,$0,.L54
        daddiu  $2,$2,4

        daddiu  $2,$20,1
        dsll    $2,$2,2
        daddu   $2,$fp,$2
        lw      $3,0($2)
        lw      $7,0($21)
        move    $6,$20
        move    $4,$fp
        move    $25,$17
        sw      $7,0($2)
        sw      $3,0($21)

        addiu   $5,$20,2
        slt     $2,$5,$22
        beq     $2,$0,.L56
        addiu   $20,$5,-1

        b       .L55
        dsll    $2,$5,2

.L75:
        move    $21,$20
.L22:
        lw      $2,0($sp)
        addiu   $5,$2,2
        lw      $2,88($sp)
        slt     $2,$5,$2
        bne     $2,$0,.L84
        ld      $3,32($sp)

.L11:
        ld      $31,184($sp)
        ld      $fp,176($sp)
        ld      $28,168($sp)
        ld      $23,160($sp)
        ld      $22,152($sp)
        ld      $21,144($sp)
        ld      $20,136($sp)
        ld      $19,128($sp)
        ld      $18,120($sp)
        ld      $17,112($sp)
        ld      $16,104($sp)
        j       $31
        daddiu  $sp,$sp,192

.L76:
        move    $20,$21
.L27:
        lw      $2,8($sp)
        addiu   $5,$2,2
        lw      $2,0($sp)
        slt     $2,$5,$2
        beq     $2,$0,.L75
        addiu   $7,$5,-1

        dsll    $2,$5,2
        b       .L21
        ld      $3,40($sp)

.L77:
        move    $21,$20
.L32:
        lw      $2,16($sp)
        addiu   $5,$2,2
        lw      $2,8($sp)
        slt     $2,$5,$2
        beq     $2,$0,.L76
        addiu   $7,$5,-1

        dsll    $2,$5,2
        b       .L26
        ld      $3,48($sp)

.L78:
        ld      $fp,24($sp)
.L37:
        lw      $2,16($sp)
        addiu   $5,$fp,2
        slt     $2,$5,$2
        beq     $2,$0,.L77
        addiu   $7,$5,-1

        dsll    $2,$5,2
        b       .L31
        ld      $3,56($sp)

.L56:
        addiu   $5,$22,2
        slt     $2,$5,$16
        beq     $2,$0,.L52
        addiu   $20,$5,-1

        b       .L51
        dsll    $2,$5,2

.L52:
        addiu   $5,$16,2
        slt     $2,$5,$19
        beq     $2,$0,.L80
        addiu   $21,$5,-1

        dsll    $2,$5,2
        b       .L46
        ld      $3,80($sp)

.L80:
        move    $22,$fp
.L47:
        addiu   $5,$19,2
        slt     $2,$5,$23
        beq     $2,$0,.L79
        addiu   $fp,$5,-1

        dsll    $2,$5,2
        b       .L41
        ld      $3,72($sp)

.L79:
        move    $20,$22
.L42:
        lw      $2,24($sp)
        addiu   $5,$23,2
        slt     $2,$5,$2
        beq     $2,$0,.L78
        addiu   $7,$5,-1

        dsll    $2,$5,2
        b       .L36
        ld      $3,64($sp)

.LC0:
        .ascii  ": Run Time: \000"
.LC3:
        .ascii  " ms\012\000"
.LC4:
        .ascii  "Avg Time: \000"
.LC6:
        .ascii  " ms\000"
.LC7:
        .ascii  "pause\000"
main:
        daddiu  $sp,$sp,-32752
        sd      $28,32696($sp)
        lui     $28,%hi(%neg(%gp_rel(main)))
        daddu   $28,$28,$25
        daddiu  $28,$28,%lo(%neg(%gp_rel(main)))
        li      $3,327680             # 0x50000
        ori     $3,$3,0x9b40
        ld      $2,%got_page(.LC1)($28)
        sd      $23,32688($sp)
        sd      $22,32680($sp)
        sd      $21,32672($sp)
        sd      $20,32664($sp)
        sd      $19,32656($sp)
        sd      $18,32648($sp)
        sdc1    $f26,32744($sp)
        sdc1    $f25,32736($sp)
        sd      $31,32712($sp)
        sd      $fp,32704($sp)
        sd      $17,32640($sp)
        sd      $16,32632($sp)
        sdc1    $f24,32728($sp)
        dsubu   $sp,$sp,$3
        li      $3,393216             # 0x60000
        ldc1    $f26,%got_ofst(.LC1)($2)
        ori     $3,$3,0x1a90
        ld      $2,%got_page(.LC2)($28)
        daddu   $3,$3,$sp
        sd      $2,0($3)
        li      $3,393216             # 0x60000
        ld      $2,%got_page(.LC3)($28)
        ori     $3,$3,0x1a98
        daddu   $3,$3,$sp
        sd      $2,0($3)
        li      $3,393216             # 0x60000
        li      $2,65536                    # 0x10000
        ori     $3,$3,0x1aa0
        li      $21,65536             # 0x10000
        ori     $2,$2,0x86a0
        daddu   $3,$3,$sp
        dmtc1   $0,$f25
        ld      $22,%got_disp(_ZSt4cout)($28)
        ld      $23,%got_page(.LC0)($28)
        li      $20,393216              # 0x60000
        li      $19,1                 # 0x1
        ori     $18,$21,0x86a0
        sd      $2,0($3)
.L98:
        move    $16,$sp
        move    $3,$sp
        move    $2,$0
.L86:
        addiu   $2,$2,1
        sw      $2,0($3)
        bne     $2,$18,.L86
        daddiu  $3,$3,4

        ld      $25,%call16(time)($28)
        move    $4,$0
        li      $2,393216             # 0x60000
        ori     $2,$2,0x1a7c
        daddu   $17,$sp,$2

        ld      $25,%call16(srand)($28)
        sll     $2,$2,0
        move    $4,$2

        li      $2,393216             # 0x60000
        ori     $2,$2,0x1aa0
        daddu   $2,$2,$sp
        ld      $fp,0($2)
.L87:
        ld      $25,%call16(rand)($28)
        daddiu  $17,$17,-4

        lw      $4,4($17)
        div     $0,$2,$fp
        teq     $fp,$0,7
        addiu   $fp,$fp,-1
        mfhi    $2
        dsll    $2,$2,2
        daddu   $2,$sp,$2
        lw      $3,0($2)
        sw      $4,0($2)
        bne     $16,$17,.L87
        sw      $3,4($17)

        ld      $25,%call16(clock)($28)
        ld      $16,%got_disp(quicksort)($28)
        daddu   $17,$sp,$20

        ori     $13,$21,0x869f
        move    $fp,$2
        move    $5,$0
        addiu   $14,$5,-1
.L110:
        dsll    $2,$5,2
        lw      $7,6780($17)
        move    $15,$14
        daddu   $2,$sp,$2
        move    $3,$5
.L89:
        lw      $6,0($2)
        slt     $4,$7,$6
        bne     $4,$0,.L88
        addiu   $3,$3,1

        addiu   $15,$15,1
        dsll    $4,$15,2
        daddu   $4,$sp,$4
        lw      $8,0($4)
        sw      $6,0($4)
        sw      $8,0($2)
.L88:
        bne     $3,$13,.L89
        daddiu  $2,$2,4

        daddiu  $2,$15,1
        dsll    $2,$2,2
        daddu   $4,$sp,$2
        lw      $6,0($4)
        lw      $7,6780($17)
        slt     $3,$5,$15
        sw      $7,0($4)
        beq     $3,$0,.L97
        sw      $6,6780($17)

        daddiu  $2,$2,-4
        daddu   $24,$sp,$2
        slt     $2,$5,$15
.L96:
        beq     $2,$0,.L93
        lw      $7,0($24)

        dsll    $2,$5,2
        daddu   $2,$sp,$2
        subu    $8,$15,$5
        move    $3,$0
.L95:
        lw      $6,0($2)
        slt     $4,$7,$6
        bne     $4,$0,.L94
        addiu   $3,$3,1

        addiu   $14,$14,1
        dsll    $4,$14,2
        daddu   $4,$sp,$4
        lw      $9,0($4)
        sw      $6,0($4)
        sw      $9,0($2)
.L94:
        bne     $8,$3,.L95
        daddiu  $2,$2,4

        lw      $7,0($24)
.L93:
        daddiu  $2,$14,1
        dsll    $2,$2,2
        daddu   $2,$sp,$2
        lw      $3,0($2)
        move    $6,$14
        move    $4,$sp
        move    $25,$16
        sw      $7,0($2)
        sw      $3,0($24)

        addiu   $5,$14,2
        slt     $2,$5,$15
        bne     $2,$0,.L96
        addiu   $14,$5,-1

.L97:
        addiu   $5,$15,2
        slt     $2,$5,$13
        bne     $2,$0,.L110
        addiu   $14,$5,-1

        ld      $25,%call16(clock)($28)
        li      $17,-177                    # 0xffffffffffffff4f

        ld      $3,0($22)
        ld      $4,%got_disp(_ZSt4cout)($28)
        ld      $6,-24($3)
        ld      $25,%call16(_ZNSolsEi)($28)
        daddu   $6,$22,$6
        lw      $7,24($6)
        li      $3,3                        # 0x3
        and     $7,$7,$17
        move    $5,$19
        ori     $7,$7,0x80
        sd      $3,16($6)
        sw      $7,24($6)
        move    $16,$2

        ld      $25,%call16(_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l)($28)
        move    $7,$2
        move    $4,$2
        li      $2,393216             # 0x60000
        li      $6,12                 # 0xc
        daddiu  $5,$23,%got_ofst(.LC0)
        ori     $2,$2,0x1aa8
        daddu   $2,$2,$sp
        dsubu   $16,$16,$fp
        sd      $7,0($2)

        dmtc1   $16,$f0
        li      $2,393216             # 0x60000
        cvt.d.l $f0,$f0
        div.d   $f0,$f0,$f26
        ori     $2,$2,0x1aa8
        daddu   $2,$2,$sp
        ld      $7,0($2)
        ld      $25,%call16(_ZNSo9_M_insertIdEERSoT_)($28)
        ld      $2,0($7)
        move    $4,$7
        ld      $2,-24($2)
        addiu   $19,$19,1
        daddu   $2,$7,$2
        lw      $3,24($2)
        and     $3,$3,$17
        ori     $3,$3,0x80
        sw      $3,24($2)
        li      $3,2                        # 0x2
        sd      $3,16($2)
        li      $2,393216             # 0x60000
        ori     $2,$2,0x1a90
        daddu   $2,$2,$sp
        ld      $2,0($2)
        ldc1    $f24,%got_ofst(.LC2)($2)
        mul.d   $f24,$f0,$f24
        mov.d   $f13,$f24

        li      $3,393216             # 0x60000
        ori     $3,$3,0x1a98
        daddu   $3,$3,$sp
        ld      $3,0($3)
        ld      $25,%call16(_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l)($28)
        li      $6,4                        # 0x4
        daddiu  $5,$3,%got_ofst(.LC3)
        move    $4,$2

        li      $2,101                  # 0x65
        bne     $19,$2,.L98
        add.d   $f25,$f25,$f24

        ld      $5,%got_page(.LC4)($28)
        ld      $25,%call16(_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l)($28)
        ld      $4,%got_disp(_ZSt4cout)($28)
        li      $6,10                 # 0xa
        daddiu  $5,$5,%got_ofst(.LC4)

        ld      $2,%got_page(.LC5)($28)
        ld      $4,%got_disp(_ZSt4cout)($28)
        ldc1    $f13,%got_ofst(.LC5)($2)
        ld      $25,%call16(_ZNSo9_M_insertIdEERSoT_)($28)
        div.d   $f13,$f25,$f13

        ld      $5,%got_page(.LC6)($28)
        ld      $25,%call16(_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l)($28)
        li      $6,3                        # 0x3
        daddiu  $5,$5,%got_ofst(.LC6)
        move    $4,$2
        move    $16,$2

        ld      $25,%call16(_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_)($28)
        move    $4,$16

        ld      $4,%got_page(.LC7)($28)
        ld      $25,%call16(system)($28)
        daddiu  $4,$4,%got_ofst(.LC7)

        li      $8,327680             # 0x50000
        ori     $8,$8,0x9b40
        daddu   $sp,$sp,$8
        ld      $31,32712($sp)
        ld      $fp,32704($sp)
        ld      $28,32696($sp)
        ld      $23,32688($sp)
        ld      $22,32680($sp)
        ld      $21,32672($sp)
        ld      $20,32664($sp)
        ld      $19,32656($sp)
        ld      $18,32648($sp)
        ld      $17,32640($sp)
        ld      $16,32632($sp)
        ldc1    $f26,32744($sp)
        ldc1    $f25,32736($sp)
        ldc1    $f24,32728($sp)
        move    $2,$0
        j       $31
        daddiu  $sp,$sp,32752

partition:
        dsll    $11,$6,2
        daddu   $11,$4,$11
        slt     $3,$5,$6
        addiu   $2,$5,-1
        beq     $3,$0,.L112
        lw      $9,0($11)

        dsll    $3,$5,2
        daddu   $3,$4,$3
.L114:
        lw      $8,0($3)
        slt     $7,$9,$8
        bne     $7,$0,.L113
        addiu   $5,$5,1

        addiu   $2,$2,1
        dsll    $7,$2,2
        daddu   $7,$4,$7
        lw      $10,0($7)
        sw      $8,0($7)
        sw      $10,0($3)
.L113:
        bne     $6,$5,.L114
        daddiu  $3,$3,4

        lw      $9,0($11)
.L112:
        daddiu  $3,$2,1
        dsll    $3,$3,2
        daddu   $4,$4,$3
        lw      $3,0($4)
        addiu   $2,$2,1
        sw      $9,0($4)
        j       $31
        sw      $3,0($11)

_GLOBAL__sub_I_main:
        daddiu  $sp,$sp,-32
        sd      $28,16($sp)
        lui     $28,%hi(%neg(%gp_rel(_GLOBAL__sub_I_main)))
        daddu   $28,$28,$25
        daddiu  $28,$28,%lo(%neg(%gp_rel(_GLOBAL__sub_I_main)))
        sd      $16,8($sp)
        ld      $16,%got_page(_ZStL8__ioinit)($28)
        ld      $25,%call16(_ZNSt8ios_base4InitC1Ev)($28)
        sd      $31,24($sp)
        daddiu  $4,$16,%got_ofst(_ZStL8__ioinit)

        ld      $6,%got_disp(__dso_handle)($28)
        ld      $25,%call16(__cxa_atexit)($28)
        ld      $4,%got_disp(_ZNSt8ios_base4InitD1Ev)($28)
        daddiu  $5,$16,%got_ofst(_ZStL8__ioinit)

        ld      $31,24($sp)
        ld      $28,16($sp)
        ld      $16,8($sp)
        j       $31
        daddiu  $sp,$sp,32

.LC1:
        .word   0
        .word   1093567616
.LC2:
        .word   0
        .word   1083129856
.LC5:
        .word   0
        .word   1079574528
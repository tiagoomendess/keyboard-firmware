
constexpr int R = 5, C = 15;

const int row_pins[R] = { 21, 1, 2, 3, 4 };

const int col_pins[C] = { 19, 18, 17, 16, 15, 14, 20, 12, 11, 10, 9, 8, 7, 6, 5 };

Layer<R,C> layers[] = {
  { "my-layout",
    l0,
    l2,
    "",
     {
      {esc, '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', bks, '`'},
      {tab, 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']','\\', del},
      {cap, 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';','\'',   0, ent, hom},
      {lsh,   0, 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/', rsh,  up, end},
      {ctl, lgu, lal,   0,   0,   0, spc,   0,   0, ral,  fn,  l3,  lt,  dn,  rt},
    },
    { {fn,  bks}, {lct, esc}, {rct, ent} }
  },
  { "vi-emu",
    l1,
    l2,
    "vi",
     {
      {esc, '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', bks, '`'},
      {tab, 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']','\\', del},
      {cap, 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';','\'',   0, ent, hom},
      {lsh,   0, 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/', rsh,  up, end},
      {ctl, lgu, lal,   0,   0,   0, spc,   0,   0, ral,  fn,  l3,  lt,  dn,  rt},
    },
    { {fn,  bks}, {lct, esc}, {rct, ent} }
  },
  { "my-layout-fn",
    l2,
    l2,
    "",
     {
      {esc,  f1,  f2,  f3,  f4,  f5,  f6,  f7,  f8,  f9, f10, f11, f12,   0, prt},
      {tab,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, ins},
      {cap,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, ppa, pgu},
      {lsh,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, rsh, vup, pgd},
      {ctl, rgu, lal,   0,   0,   0, mut,   0,   0, mnu,  fn,  l3, ptk, vdn, ntk},
    },
    { {fn,  bks}, {lct, esc}, {rct, ent} }
  },
  { "my-layout-switcher",
    l3,
    l2,
    "",
     {
      {  0,  l0,  l2,  l1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
      {  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
      {  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
      {  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
      {  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  l3,   0,   0,   0},
    },
    { {fn,  bks}, {lct, esc}, {rct, ent} }
  },
};

// The layout has 5 rows and 12 columns.
constexpr int R = 5, C = 12;

// The row pins, to be modified according to the exact wiring.
const int row_pins[R] = { 22, 20, 18, 16, 14};

// The column pins, to be modified according to the exact wiring.
const int col_pins[C] = { 1, 2, 3, 4, 5, 6, 15, 11, 12, 9, 8, 7};

// Layers of this layout. The keyboard always loads layer 0 to start.
// See key_map.h for definitions of keys, e.g. lsh <=> left shift.
Layer<R,C> layers[] = {
  { "darknight",  // name of this layer
    l0,  // this is layer 0
    l2,  // Fn layer is layer 2
    "",  // use no translator
    {
      {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '='},
      {tab, 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p','\''},
      {lct, 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', rct},
      {lsh, 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/', rsh},
      {lgu, '`', mlc, mrc, lal,  fn, spc, ral, '[', ']','\\', del},
    },
    // Tapping on modifiers to get normal keys.
    { {fn,  bks}, {lct, esc}, {rct, ent} }
  },
  { "darknight-vi",  // name of this layer
    l1,  // this is layer 1
    l2,  // Fn layer is layer 2
    "vi",  // use vi translator
    {
      {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '='},
      {tab, 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p','\''},
      {lct, 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', rct},
      {lsh, 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/', rsh},
      {lgu, '`', mlc, mrc, lal,  fn, spc, ral, '[', ']','\\', del},
    },
    // Tapping on modifiers to get normal keys.
    { {fn,  bks}, {lct, esc}, {rct, ent} }
  },
  { "darknight-fn",
    l2,  // this is layer 2
    l2,  // Fn layer is itself
    "",  // use no translator
    {
      { f1,  f2,  f3,  f4,  f5,  f6,  f7,  f8,  f9, f10, f11, f12},
      {tab, '`', mut, vdn, vup,   0, bks, del, '[', ']','\\', cap},
      {lct, ply, pau, rew, ffw, rec,  lt,  dn,  up,  rt,   0, rct},
      {lsh,   0, stp, ptk, ntk, ejt, hom, pgd, pgu, end,   0, rsh},
      {lgu,  l0,  l1,  l2, lal,  fn, spc, ral, '[', ']','\\', del},
    },
    // Tapping on modifiers to get normal keys.
    { {fn,  bks}, {lct, esc}, {rct, ent} }
  },
};

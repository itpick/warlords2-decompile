/*
 * t_zoom.c - the floats' zoom boxes (tasklist B10), against frames measured
 * on the original (Erythea, 1024x768, bridge :3200, 9 Oct 2026; content
 * rects in global coordinates).
 */

TEST(info_area_zoom_cycles_three_measured_frames)
{
    Rect a, b, c, d;
    SetRect(&a, 797, 492, 1021, 621);      /* start-up 2x2 layout, 224x129 */
    InfoLayoutNextRect(0, &a, &b);
    CHECK_EQ(b.left, 909); CHECK_EQ(b.top, 501);   /* one column, 112x120 */
    CHECK_EQ(b.right, 1021); CHECK_EQ(b.bottom, 621);
    InfoLayoutNextRect(1, &b, &c);
    CHECK_EQ(c.left, 661); CHECK_EQ(c.top, 555);   /* one row, 360x66 */
    CHECK_EQ(c.right, 1021); CHECK_EQ(c.bottom, 621);
    InfoLayoutNextRect(2, &c, &d);                  /* and back */
    CHECK_EQ(d.left, a.left); CHECK_EQ(d.top, a.top);
    CHECK_EQ(d.right, a.right); CHECK_EQ(d.bottom, a.bottom);
}

TEST(overview_zoom_toggles_two_measured_frames)
{
    Rect a, b, c;
    SetRect(&a, 797, 34, 1021, 346);       /* 224x312, 2 px a tile */
    OverviewToggleRect(false, &a, &b);
    CHECK_EQ(b.left, 797); CHECK_EQ(b.top, 34);
    CHECK_EQ(b.right, 909); CHECK_EQ(b.bottom, 190);   /* 112x156, 1 px a tile */
    OverviewToggleRect(true, &b, &c);
    CHECK_EQ(c.right, 1021); CHECK_EQ(c.bottom, 346);
}

/* (FloatZoomBox itself is not run here: the window globals are `int *`,
 * 32-bit on the PPC, and cannot hold a 64-bit host window pointer.) */

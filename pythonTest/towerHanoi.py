class HanoiTower:
    def solve(self, n, turmVon, turmBis):
        if n > 0:
            turmHilf = abs(turmVon + turmBis - 3)
            self.solve(n - 1, turmVon, turmHilf)
            print("Scheibe: " + str(n) +
                  " von: " + str(turmVon) +
                  " nach: " + str(turmBis))
            self.solve(n - 1, turmHilf, turmBis)


tower = HanoiTower()
turmVon = 0
turmBis = 1
turmHoehe = 4
tower.solve(turmHoehe, turmVon, turmBis)

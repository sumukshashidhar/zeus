class OHLCV:
    def __init__(
        self,
        timestamp_list=[],
        open_list=[],
        high_list=[],
        low_list=[],
        close_list=[],
        volume_list=[],
    ) -> None:
        self.timestamps = timestamp_list
        self.open = open_list
        self.high = high_list
        self.low = low_list
        self.close = close_list
        self.volume = volume_list

    def get_last_close(self):
        try:
            last = self.close[-1]
        except IndexError:
            # given index does not exist in the data frame
            print("NO OHLC data has been defined for this")

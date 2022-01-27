"""A model to store data from various ticker / asset classes to be
used in various strategy / backtesting environments"""

from ohlcv import OHLCV
from identification import Identifier


class Data:
    """The data class that stores and provides various
    accessor and mutator functions to access and modify the stored data
    """

    def __init__(self, identification=None, ohlcv=None) -> None:
        """The constructor for the data class that takes in an Identifier
        Object, and an OHLCV object


        Args:
            identification (Identifier, optional): The ticker, exchange,
            datasource, desc, etc data, to be used for identification
            and debugging purposes. Defaults to None.

            ohlcv (OHLCV, optional): The open, high, low, close, volume data,
            to generate indicators and perform trading. Defaults to None.
        """
        self.identification = identification if identification else Identifier()
        self.ohlcv = ohlcv if ohlcv else OHLCV()

    def ohlcv_get_ltp(self):
        """Get the last traded price for a particular asset.
        This is helpful for monitoring and the such.

        Returns:
            Float: The last traded price of an asset.
        """
        return self.ohlcv.get_last_close()
    
    def ohlcv_update_prices(self, )

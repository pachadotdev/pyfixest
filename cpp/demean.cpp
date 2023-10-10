#include <iostream>
#include <optional>
#include <unordered_map>
#include <vector>

using namespace std;
// pyhdfe. numbas, numpy equivalent namespaces?

typedef unordered_map<string, any> LookupDemeanedData;

tuple<DataFrame, DataFrame, optional<DataFrame>> demean_model(
    DataFrame Y, DataFrame X, optional<DataFrame> fe,
    optional<ndarray<double>> weights, LookupDemeanedData lookup_demeaned_data,
    string na_index_str, bool drop_singletons) {
  // Demeans a single regression model.

  // If the model has fixed effects
  // The fixed effects are demeaned using the PyHDFE package.
  // Prior to demeaning, the function checks if some of the variables have
  // already been demeaned and uses values from the cache `lookup_demeaned_data`
  // if possible.

  // If the model has no fixed effects
  // The function does not demean the data.

  // Args:
  //     Y (pd.DataFrame): A DataFrame of the dependent variable.
  //     X (pd.DataFrame): A DataFrame of the covariates.
  //     fe (pd.DataFrame or None): A DataFrame of the fixed effects. None if no
  //     fixed effects specified. weights (np.ndarray or None): A numpy array of
  //     weights. None if no weights. lookup_demeaned_data (Dict[str, Any]): A
  //     dictionary with keys for each fixed effects combination and
  //         potentially values of demeaned data frames. The function checks
  //         this dictionary to see if some of the variables have already been
  //         demeaned.
  //     na_index_str (str): A string with indices of dropped columns. Used for
  //     caching of demeaned variables.

  // Returns:
  //     Tuple[pd.DataFrame, pd.DataFrame, Optional[pd.DataFrame]]: A tuple of
  //     the following elements:
  //         - Yd (pd.DataFrame): A DataFrame of the demeaned dependent
  //         variable.
  //         - Xd (pd.DataFrame): A DataFrame of the demeaned covariates.
  //         - Id (pd.DataFrame or None): A DataFrame of the demeaned
  //         Instruments. None if no IV.

  YX = FOOBAR;
  yx_names = FOOBAR;

  // ...

  if (fe != NULL) {
    // check if looked array has data for na_index
  }

  // ETC
}

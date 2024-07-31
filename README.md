<p align="center">
  <img width="100" src="./assets/logo.png" alt="Logo">
</p>

<h1 align="center">Fut Card Generator</h1>
<p align="center">Generate custom Fut cards.</p>

<p align="center">
    <img src="https://img.shields.io/github/license/eoussama/fut-card-generator" />
    <img src="https://img.shields.io/github/v/tag/eoussama/fut-card-generator" />
    <img src="https://img.shields.io/github/languages/code-size/eoussama/fut-card-generator" />
</p>

## Description

Fut Card Generator is a command line tool and library to generate custom Fut cards.

## Installation

### From source

Clone the repository and update the submodules:

```bash
git clone https://github.com/eoussama/fut-card-generator.git
cd fut-card-generator
git submodule update --init --recursive
```

Build the project:

```bash
mkdir build
cd build
cmake ..
```

### From binary

Download the latest release from the [releases page](https://github.com/eoussama/fut-card-generator/releases).

## Usage

```bash
fut-card-generator --help
```

### Options

The following are the options available

| Option | Abbreviation | Default | Description |
| --- | --- | --- | --- |
| `--help` | -h | | Show help message |
| `--version` | -v | | Show version |
| `--name` | -n | | Player name |
| `--out` | -o | | Output file path |
| `--show` | -s | | Flag whether to preview the card after generation | |
| `--logo` | -l | | Path to the logo of the player | |
| `--image` | -i | | Path to the image of the player | |
| `--translation` | -t | | Transaltion of the text on the card | |
| `--edition` | -e | | Code for the edition of the fut card to generate | |
| `--kind` | -k | | Code for the template of the card to generate | |
| `--country` | -c | | Country code of the player | |
| `--position` | -p | | Position of the player on the card | |
| `--pace` | -pac | | Pace of the player on the card | |
| `--passing` | -pas | | Passing of the player on the card | |
| `--physical` | -phy | | Physical of the player on the card | |
| `--shooting` | -sho | | Skill of the player on the card | |
| `--dribbling` | -dri | | Dribbling of the player on the card | |
| `--defending` | -def | | Defense of the player on the card | |

#### Translations

| Code | Language |
| --- | --- |
| en | English |
| fr | French |
| es | Spanish |
| pt | Portuguese |
| it | Italian |
| de | German |

#### Editions

| Code | Edition |
| --- | --- |
| fifa19 | FIFA 19 |

#### Positions

| Code | Position |
| --- | --- |
| gk | Goalkeeper |
| lb | Left Back |
| lwb | Left Wing Back |
| cb | Centre Back |
| rb | Right Back |
| rwb | Right Wing Back |
| lm | Left Midfield |
| cdm | Centre Midfield |
| cm | Centre Midfield |
| cam | Centre Midfield |
| rm | Right Midfield |
| lw | Left Wing |
| rw | Right Wing |
| lf | Left Full Back |
| cf | Centre Full Back |
| rf | Right Full Back |
| st | Striker |
| all | All |

#### Kinds

| Code | Kind | Preview |
| --- | --- | --- |
| common_bronze | Common Bronze | <img src="./assets/bgs/19/cards/common_bronze.png" width="50"> |
| common_silver | Common Silver | <img src="./assets/bgs/19/cards/common_silver.png" width="50"> |
| common_gold | Common Gold | <img src="./assets/bgs/19/cards/common_gold.png" width="50"> |
| rare_bronze | Rare Bronze | <img src="./assets/bgs/19/cards/rare_bronze.png" width="50"> |
| rare_silver | Rare Silver | <img src="./assets/bgs/19/cards/rare_silver.png" width="50"> |
| rare_gold | Rare Gold | <img src="./assets/bgs/19/cards/rare_gold.png" width="50"> |
| if_bronze | IF Bronze | <img src="./assets/bgs/19/cards/if_bronze.png" width="50"> |
| if_silver | IF Silver | <img src="./assets/bgs/19/cards/if_silver.png" width="50"> |
| if_gold | IF Gold | <img src="./assets/bgs/19/cards/if_gold.png" width="50"> |
| fc_bronze | FC Bronze | <img src="./assets/bgs/19/cards/if_bronze.png" width="50"> |
| fc_silver | FC Silver | <img src="./assets/bgs/19/cards/if_silver.png" width="50"> |
| fc_gold | FC Gold | <img src="./assets/bgs/19/cards/if_gold.png" width="50"> |
| motm | MOTM | <img src="./assets/bgs/19/cards/motm.png" width="50"> |
| pl_potm | PL POTM | <img src="./assets/bgs/19/cards/potm_pl.png" width="50"> |
| bl_potm | BL POTM | <img src="./assets/bgs/19/cards/potm_bundesliga.png" width="50"> |
| futties | Futties | <img src="./assets/bgs/19/cards/futties.png" width="50"> |
| futtiesw | FuttiesW | <img src="./assets/bgs/19/cards/futties_winner.png" width="50"> |
| toty | Toty | <img src="./assets/bgs/19/cards/toty.png" width="50"> |
| toty_n | Toty N | <img src="./assets/bgs/19/cards/toty_nominees.png" width="50"> |
| el | EL | <img src="./assets/bgs/19/cards/europa_league.png" width="50"> |
| el_motm | EL MOTM | <img src="./assets/bgs/19/cards/europa_league_motm.png" width="50"> |
| el_live | EL Live | <img src="./assets/bgs/19/cards/europa_league_live.png" width="50"> |
| el_sbc | EL SBC | <img src="./assets/bgs/19/cards/europa_league_sbc.png" width="50"> |
| el_tott | EL Tott | <img src="./assets/bgs/19/cards/europa_league_tott.png" width="50"> |
| common_ucl | Common UCL | <img src="./assets/bgs/19/cards/ucl_common.png" width="50"> |
| rare_ucl | Rare UCL | <img src="./assets/bgs/19/cards/ucl_rare.png" width="50"> |
| ucl_motm | UCL MOTM | <img src="./assets/bgs/19/cards/ucl_motm.png" width="50"> |
| ucl_live | UCL Live | <img src="./assets/bgs/19/cards/ucl_live.png" width="50"> |
| ucl_sbc | UCL SBC | <img src="./assets/bgs/19/cards/ucl_sbc.png" width="50"> |
| ucl_tott | UCL Tott | <img src="./assets/bgs/19/cards/ucl_tott.png" width="50"> |
| fsr | FSR | <img src="./assets/bgs/19/cards/fut_swap_rewards.png" width="50"> |
| fs | FS | <img src="./assets/bgs/19/cards/future_stars.png" width="50"> |
| fsn | FSN | <img src="./assets/bgs/19/cards/future_stars_nominees.png" width="50"> |
| pp | PP | <img src="./assets/bgs/19/cards/pro_player.png" width="50"> |
| cb | CB | <img src="./assets/bgs/19/cards/carniball.png" width="50"> |
| rb | RB | <img src="./assets/bgs/19/cards/record_breaker.png" width="50"> |
| hero | Hero | <img src="./assets/bgs/19/cards/hero.png" width="50"> |
| aw | AW | <img src="./assets/bgs/19/cards/award_winner.png" width="50"> |
| fb | FB | <img src="./assets/bgs/19/cards/flashback.png" width="50"> |
| headliners | Headliners | <img src="./assets/bgs/19/cards/headliners.png" width="50"> |
| cc | CC | <img src="./assets/bgs/19/cards/concept.png" width="50"> |
| sbc | SBC | <img src="./assets/bgs/19/cards/sbc.png" width="50"> |
| sbcp | SBCP | <img src="./assets/bgs/19/cards/sbc_premium.png" width="50"> |
| legend | Legend | <img src="./assets/bgs/19/cards/legend.png" width="50"> |
| fs1 | FS1 | <img src="./assets/bgs/19/cards/fut_swap_1.png" width="50"> |
| fs2 | FS2 | <img src="./assets/bgs/19/cards/fut_swap_2.png" width="50"> |
| fs3 | FS3 | <img src="./assets/bgs/19/cards/fut_swap_3.png" width="50"> |
| fs4 | FS4 | <img src="./assets/bgs/19/cards/fut_swap_4.png" width="50"> |
| fs5 | FS5 | <img src="./assets/bgs/19/cards/fut_swap_5.png" width="50"> |
| fs6 | FS6 | <img src="./assets/bgs/19/cards/fut_swap_6.png" width="50"> |
| fs7 | FS7 | <img src="./assets/bgs/19/cards/fut_swap_7.png" width="50"> |
| fs8 | FS8 | <img src="./assets/bgs/19/cards/fut_swap_8.png" width="50"> |
| fs9 | FS9 | <img src="./assets/bgs/19/cards/fut_swap_9.png" width="50"> |
| fs10 | FS10 | <img src="./assets/bgs/19/cards/fut_swap_10.png" width="50"> |
| fs11 | FS11 | <img src="./assets/bgs/19/cards/fut_swap_11.png" width="50"> |
| otw | OTW | <img src="./assets/bgs/19/cards/fut_swap_rewards.png" width="50"> |
| st_patricks | ST PATRICKS | <img src="./assets/bgs/19/cards/st_patricks.png" width="50"> |


#### Country Codes

Check out [countries.json](./assets/nations/countries.json) for a list of all the country codes.

> Note: All parameters should be lowercase, that goes especially for the country codes.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.